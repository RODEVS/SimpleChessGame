#! usr/bin/env python
# -*- encoding utf-8 -*-

"""
    clase que ejecuta el juego usando dos ciclos.
    El primer ciclo se ejecutara siempre y cuando no exista Jaquemate por algun
    jugador.
    El segundo ciclo es el que actualiza constantemente los graficos en pantalla
"""

import pygame
from pygame.locals import *
from Reglas import *
from TableroUI import *
from ui_jaquemate import Ui_finJuego

class Ajedrez(object):

    def __init__(self, opciones = [], screen = None, help = False):

            self.reglas = Reglas()
            self.gui = TableroUI(opciones, pantalla = screen, ayuda = help)
            self.color = ('blanco', 'negro')

    def mover(self, pos):

        x, y = pos[0]
        nx, ny = pos[1]
        aPieza = self.gui.tablero[nx][ny]

        if not 'v' in self.gui.tablero[nx][ny]:
            if 'n' in self.gui.tablero[nx][ny]:
                self.gui.piezasNegrasEliminadas.append(self.gui.tablero[nx][ny])
            else:
                self.gui.piezasBlancasEliminadas.append(self.gui.tablero[nx][ny])

        self.gui.tablero[nx][ny] = self.gui.tablero[x][y]
        self.gui.tablero[x][y] = 'v'

    def obtenerPosiciones(self, board, colorActual):
        """ Retorna las coordenadas en dos tuplas """
        dePos = 0
        aPos = 0
        while not dePos or not aPos:
            seleccion = []
            e = pygame.event.wait()
            if e.type is KEYDOWN:
                if e.key is K_ESCAPE:
                    sys.exit(1)
            if e.type is MOUSEBUTTONDOWN:
                pos = pygame.mouse.get_pos()
                seleccion = self.gui.aXY(pos)
                if seleccion[0] < 0 or seleccion[0] > 7 or seleccion[1] < 0 or seleccion[1] > 7:
                    seleccion = []
            if e.type is QUIT:
                pygame.quit()
                sys.exit(0)
            if not dePos and not aPos:
                self.gui.dibujar(colorActual)
                pygame.display.flip()
                if seleccion != []:
                    f, c = seleccion
                    if colorActual is 'negro' and 'n' in board[f][c]:
                        if len(self.reglas.movimientosValidos(board, colorActual, seleccion)) > 0:
                            dePos = 1
                            deTupla = seleccion
                    elif colorActual is 'blanco' and 'b' in board[f][c]:
                        if len(self.reglas.movimientosValidos(board, colorActual, seleccion)) > 0:
                            dePos = 1
                            deTupla = seleccion
            elif dePos and not aPos:
                posiblesDestinos = self.reglas.movimientosValidos(board, colorActual, deTupla)
                self.gui.dibujar(colorActual, posiblesDestinos)  #El parametro posiblesDestinos queda pendiente.
                pygame.display.flip()
                if seleccion != []:
                    f, c = seleccion
                    if seleccion in posiblesDestinos:
                        aPos = 1
                        aTupla = seleccion
                    elif colorActual is 'negro' and 'n' in board[f][c]:
                        if seleccion == deTupla:
                            dePos = 0
                        elif len(self.reglas.movimientosValidos(board, colorActual, seleccion)) > 0:
                            dePos = 1
                            deTupla = seleccion
                        else:
                            dePos = 0
                    elif colorActual is 'blanco' and 'b' in board[f][c]:
                        if seleccion == deTupla:
                            dePos = 0
                        elif len(self.reglas.movimientosValidos(board, colorActual, seleccion)) > 0:
                            dePos = 1
                            deTupla = seleccion
                        else:
                            dePos = 0
                        dePos = 0

        return (deTupla, aTupla)

    def loop(self):
        """ Ciclo principal del juego """ 

        turnoActual = 0
        contadorTurno = 0

        while not self.reglas.esJaquemate(self.gui.tablero, self.color[turnoActual]):
                board = self.gui.tablero
                colorActual = self.color[turnoActual]
                if colorActual is 'blanco':
                    contadorTurno += 1
                    
                self.gui.dibujar("      ")
                #self.gui.mensajeJaquemate()
                if self.reglas.estaEnJaque(board, colorActual):
                        msj = self.color[turnoActual] + "esta en Jaque!"
                        self.gui.escribeEstado(msj)
                        print self.color[turnoActual] +" esta en Jaque!"

                movida = self.obtenerPosiciones(board, colorActual)
                self.mover(movida)
                turnoActual = (turnoActual+1)%2

        sys.exit(0)

              
        
if __name__ == '__main__':

    iniciar = Ajedrez()
    iniciar.loop()
