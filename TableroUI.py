#! usr/bin/env python

import pygame
from pygame.locals import *
import sys, os
#from ui_jaquemate import Ui_finJuego

""" La clase tablero entra en conflicto con la clase Ajedrez, por lo que se require modificar la forma de establecer una conexion entre ambas clases """

class TableroUI(object):

        def __init__(self, opciones = [], imagenes = [], pantalla = None, ayuda = False):
                """
                 El parametro opciones contiene una lista del color de fondo, colorUno
                y colorDos respectivamente. Si este parametro es vacio o igual a 0 entoces
                se usan los valores por defecto para estas opciones.
                El parametro imagenes contiene una lista de las imagenes que se usaran en el juego,
                de igual manera, si este parametro esta vacio o igual a cero se usaran las imagenes
                por defecto.

                """
                self.ayuda = ayuda
                self.pantalla = pantalla
                self.tablero = [ ["tn", "cn", "an", "dn", "rn", "an", "cn", "tn"],
                                 ["pn", "pn", "pn", "pn", "pn", "pn", "pn", "pn"],
                                 ["v", "v", "v", "v", "v", "v", "v", "v"], 
                                 ["v", "v", "v", "v", "v", "v", "v", "v"], 
                                 ["pn", "v", "v", "v", "v", "v", "v", "v"], 
                                 ["v", "v", "v", "v", "v", "v", "v", "v"], 
                                 ["pb", "pb", "pb", "pb", "pb", "pb", "pb", "pb"],
                                 ["tb", "cb", "ab", "db", "rb", "ab", "cb", "tb"] ]

                self.piezasBlancasEliminadas = []
                self.piezasNegrasEliminadas = []

                if len(opciones) > 4:
                        self.fondo = opciones[0]
                        self.colorUno = opciones[1]
                        self.colorDos = opciones[2]
                        self.colorFuente = opciones[3]
                        self.colorDetalles = opciones[4]
                else:
                        self.fondo    = (128, 128, 128, 128)
                        self.colorUno = (45, 45, 45)
                        self.colorDos = (255, 255, 255)
                        self.colorFuente = (0, 0, 0)
                        self.colorDetalles = (0, 0, 0)

                self.tamanoVentana = (760, 610)
                self.margenX = 25
                self.margenY = 25
                self.escaque = 70
                self.titulo = "Ajedrez"
                self.inicializaPygame()

        def inicializaPygame(self):
                """ Este metodo inicializa el surface de Pygame """
                if self.pantalla is "Normal":
                    self.ventana = pygame.display.set_mode(self.tamanoVentana) 
                elif self.pantalla is "Completa":
                    self.ventana = pygame.display.set_mode(self.tamanoVentana, FULLSCREEN) 
                else:
                    self.ventana = pygame.display.set_mode(self.tamanoVentana)
                    
                pygame.display.set_caption(self.titulo)
                pygame.font.init()
                self.fuentes = pygame.font.Font(None, 16)
                self.ventana.fill(self.fondo)
                icon = pygame.image.load('images/icono.png') #Habilitar transparencia en formato png
                pygame.display.set_icon(icon)

        def dibujaTablero(self):
                """ Este metodo dibuja las celdas del tablero de Ajedrez """

                for i in range(8):
                        for j in range(8):
                                x = self.margenX + j * self.escaque
                                y = self.margenY + i * self.escaque
                                dibujaRect = pygame.Rect(x, y, self.escaque, self.escaque)

                                if i % 2 == 0:
                                        if j % 2 != 0:
                                                pygame.draw.rect(self.ventana, self.colorUno, dibujaRect)
                                        else: 
                                                pygame.draw.rect(self.ventana, self.colorDos, dibujaRect)
                                elif j % 2 == 0:
                                        pygame.draw.rect(self.ventana, self.colorUno, dibujaRect)
                                else:
                                        pygame.draw.rect(self.ventana, self.colorDos, dibujaRect)
        def dibujaDetalles(self):

                letra = ('A', 'B', 'C', 'D', 'E', 'F', 'G', 'H')
                numero = ('8', '7', '6', '5', '4', '3', '2', '1')
                letraX = self.margenX + (self.escaque / 2)
                letraY = self.margenY - 15

                for i in letra:
                        let = self.fuentes.render(i, False, self.colorDetalles)
                        self.ventana.blit(let, (letraX, letraY))
                        letraX += self.escaque

                numeroX = self.margenX - 15
                numeroY = self.margenY +(self.escaque / 2)

                for i in numero:
                        num = self.fuentes.render(i, False, self.colorDetalles)
                        self.ventana.blit(num, (numeroX, numeroY))
                        numeroY += self.escaque

        def escribeEstado(self, estado):        
                estado = self.fuentes.render(estado, False, self.colorFuente)
                posY = (self.escaque * 8) + self.margenY + 5
                self.ventana.blit(estado, (posY, self.margenX))                
                        
        def dibujaEliminadas(self):
                
                piezasBlancas = self.piezasBlancasEliminadas
                totalBlancas = len(piezasBlancas)
                piezasNegras = self.piezasNegrasEliminadas
                totalNegras = len(piezasNegras)

                if totalBlancas > 0:
                        for i in range(totalBlancas):
                                pixel = self.aPixel((9, i))
                                img = self.obtenerImagen(piezasBlancas[i])
                                rect = img.get_rect()
                                rect.topleft = (pixel[0] + 3, pixel[1] + 3)
                                self.ventana.blit(img, rect)

                if totalNegras > 0:
                        for i in range(totalNegras):
                                pixel = self.aPixel((8, i))
                                img = self.obtenerImagen(piezasNegras[i])
                                rect = img.get_rect()
                                rect.topleft = (pixel[0] + 3, pixel[1] + 3)
                                self.ventana.blit(img, rect)
        def marcaValidos(self, celdas = ()):

                for i in celdas:
                        i = self.aPixel(i)
                        escaque = pygame.image.load(os.path.join('images', 'marca.png')).convert()
                        self.ventana.blit(escaque, (i[1], i[0]))
        
        def cargarImagenes(self):
                """ Este metodo carga las imagenes en el tablero """

                for i in range(8):
                        for j in range(8):
                                if self.tablero[i][j] != 'v':
                                        pixel = self.aPixel((j, i))
                                        pieza = self.tablero[i][j]
                                        img = self.obtenerImagen(pieza)
                                        rect = img.get_rect()
                                        rect.topleft = (pixel[0] + 3, pixel[1] + 3)
                                        self.ventana.blit(img, rect)
                                        
        def obtenerImagen(self, nombre = ""):
                return pygame.image.load("images/"+nombre+".png")

        def dibujar(self, color, celdas = ()):
                self.dibujaTablero()
                self.dibujaDetalles()
                self.cargarImagenes()
                self.dibujaEliminadas()

                if self.ayuda:
                    self.marcaValidos(celdas)
                #self.escribeTurno(color)
                
        def aPixel(self, (x, y)):
                pixelX = self.margenX + x * self.escaque
                pixelY = self.margenY + y * self.escaque
                return pixelX, pixelY

        def aXY(self, (x, y)):
                x = (x - self.margenX) / self.escaque
                y = (y - self.margenY) / self.escaque
                return y, x

        def testMouse(self, posicion):                  #Metodo de Testeo.

                xy = self.aXY(posicion)
                print "Pixel:  "+str(posicion)
                print "(x, y): "+str(xy)
                print "----------------------"
               

if __name__ == '__main__':
        """ Solo para test """
        pygame.init()
        gui = TableroUI()
        gui.dibujar("Blanco")

        while True:
                evento = pygame.event.wait()
                if evento.type is QUIT:
                        pygame.quit()
                        sys.exit(0)
                elif evento.type is MOUSEBUTTONDOWN:
                        pos = pygame.mouse.get_pos()
                        gui.testMouse(pos)
                elif evento.type is KEYDOWN:
                        if evento.key is K_ESCAPE:
                                sys.exit(1)
                
                pygame.display.update()
				

