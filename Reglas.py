#! usr/bin/env python

""" 

    Clase Reglas

    Autor: Rodrigo Alexis Rodriguez
    Contacto: rodrigoalexismx@gmail.com
    Descripcion: Esta clase maneja y valida los movimientos de las piezas de Ajedrez
    
"""

class Reglas:

    def esJaquemate(self, board, color):
        if color == 'negro':
            miColor = 'n'
            colorContrario = 'b'
        else:
            miColor = 'b'
            colorContrario = 'n'
        misMovimientosValidos = []
        for f in range(8):
            for c in range(8):
                piece = board[f][c]
                if miColor in piece:
                    misMovimientosValidos.extend(self.movimientosValidos(board, color, (f, c)))

        if len(misMovimientosValidos) == 0:
            return True
        else:
            return False

    def movimientosValidos(self, board, color, dePos):
        destinosLegales = []
        for f in range(8):
            for c in range(8):
                d = (f, c)
                if self.validarMovimiento(board, color, dePos, d):
                    if not self.movimientoPoneEnJaque(board, color, dePos, d):
                        destinosLegales.append(d)

        return destinosLegales

    def validarMovimiento(self, board, color, fromTuple, toTuple):
        fromSquare_r = fromTuple[0] #de fila que se quiere mover
        fromSquare_c = fromTuple[1] #de columna que se quiere mover
        toSquare_r = toTuple[0]     #A fila que se quiere mover
        toSquare_c = toTuple[1]     #A columna que se quiere mover
        fromPiece = board[fromSquare_r][fromSquare_c]   #La pieza que se quiere mover
        toPiece = board[toSquare_r][toSquare_c] #A Posicion del tablero que se quiere mover
        if color == 'negro':
            enemyColor = 'b'
        if color == 'blanco':
            enemyColor = 'n'
        if fromTuple == toTuple:
            return False
        if 'p' in fromPiece:
            if color == 'negro':
                if toSquare_r == fromSquare_r + 1 and toSquare_c == fromSquare_c and toPiece == 'v':
                    return True
                if fromSquare_r == 1 and toSquare_r == fromSquare_r + 2 and toSquare_c == fromSquare_c and toPiece == 'v':
                    if self.caminoLimpio(board, fromTuple, toTuple):
                        return True
                if toSquare_r == fromSquare_r + 1 and (toSquare_c == fromSquare_c + 1 or toSquare_c == fromSquare_c - 1) and enemyColor in toPiece:
                    return True
            elif color == 'blanco':
                if toSquare_r == fromSquare_r - 1 and toSquare_c == fromSquare_c and toPiece == 'v':
                    return True
                if fromSquare_r == 6 and toSquare_r == fromSquare_r - 2 and toSquare_c == fromSquare_c and toPiece == 'v':
                    if self.caminoLimpio(board, fromTuple, toTuple):
                        return True
                if toSquare_r == fromSquare_r - 1 and (toSquare_c == fromSquare_c + 1 or toSquare_c == fromSquare_c - 1) and enemyColor in toPiece:
                    return True
        elif 't' in fromPiece:
            if (toSquare_r == fromSquare_r or toSquare_c == fromSquare_c) and (toPiece == 'v' or enemyColor in toPiece):
                if self.caminoLimpio(board, fromTuple, toTuple):
                    return True
        elif 'c' in fromPiece:
            col_diff = toSquare_c - fromSquare_c
            row_diff = toSquare_r - fromSquare_r
            if toPiece == 'v' or enemyColor in toPiece:
                if col_diff == 1 and row_diff == -2:
                    return True
                if col_diff == 2 and row_diff == -1:
                    return True
                if col_diff == 2 and row_diff == 1:
                    return True
                if col_diff == 1 and row_diff == 2:
                    return True
                if col_diff == -1 and row_diff == 2:
                    return True
                if col_diff == -2 and row_diff == 1:
                    return True
                if col_diff == -2 and row_diff == -1:
                    return True
                if col_diff == -1 and row_diff == -2:
                    return True
        elif 'a' in fromPiece:
            if abs(toSquare_r - fromSquare_r) == abs(toSquare_c - fromSquare_c) and (toPiece == 'v' or enemyColor in toPiece):
                if self.caminoLimpio(board, fromTuple, toTuple):
                    return True
        elif 'd' in fromPiece:
            if (toSquare_r == fromSquare_r or toSquare_c == fromSquare_c) and (toPiece == 'v' or enemyColor in toPiece):
                if self.caminoLimpio(board, fromTuple, toTuple):
                    return True
            if abs(toSquare_r - fromSquare_r) == abs(toSquare_c - fromSquare_c) and (toPiece == 'v' or enemyColor in toPiece):
                if self.caminoLimpio(board, fromTuple, toTuple):
                    return True
        elif 'r' in fromPiece:
            col_diff = toSquare_c - fromSquare_c
            row_diff = toSquare_r - fromSquare_r
            if toPiece == 'v' or enemyColor in toPiece:
                if abs(col_diff) == 1 and abs(row_diff) == 0:
                    return True
                if abs(col_diff) == 0 and abs(row_diff) == 1:
                    return True
                if abs(col_diff) == 1 and abs(row_diff) == 1:
                    return True
        return False

    def movimientoPoneEnJaque(self, board, color, fromTuple, toTuple):
        fromSquare_r = fromTuple[0]
        fromSquare_c = fromTuple[1]
        toSquare_r = toTuple[0]
        toSquare_c = toTuple[1]
        fromPiece = board[fromSquare_r][fromSquare_c]
        toPiece = board[toSquare_r][toSquare_c]
        board[toSquare_r][toSquare_c] = fromPiece
        board[fromSquare_r][fromSquare_c] = 'v'
        retval = self.estaEnJaque(board, color)
        board[toSquare_r][toSquare_c] = toPiece
        board[fromSquare_r][fromSquare_c] = fromPiece
        return retval

    def estaEnJaque(self, board, color):
        if color == 'negro':
            miColor = 'n'
            colorContrario = 'b'
            colorContrarioFull = 'blanco'
        else:
            miColor = 'b'
            colorContrario = 'n'
            colorContrarioFull = 'negro'
        kingTuple = (0, 0)
        for row in range(8):
            for col in range(8):
                piece = board[row][col]
                if 'r' in piece and miColor in piece:
                    kingTuple = (row, col)

        for row in range(8):
            for col in range(8):
                piece = board[row][col]
                if colorContrario in piece:
                    if self.validarMovimiento(board, colorContrarioFull, (row, col), kingTuple):
                        return True

        return False

    def caminoLimpio(self, board, fromTuple, toTuple):
        fromSquare_r = fromTuple[0]
        fromSquare_c = fromTuple[1]
        toSquare_r = toTuple[0]
        toSquare_c = toTuple[1]
        fromPiece = board[fromSquare_r][fromSquare_c]
        if abs(fromSquare_r - toSquare_r) <= 1 and abs(fromSquare_c - toSquare_c) <= 1:
            return True
        else:
            if toSquare_r > fromSquare_r and toSquare_c == fromSquare_c:
                newTuple = (fromSquare_r + 1, fromSquare_c)
            elif toSquare_r < fromSquare_r and toSquare_c == fromSquare_c:
                newTuple = (fromSquare_r - 1, fromSquare_c)
            elif toSquare_r == fromSquare_r and toSquare_c > fromSquare_c:
                newTuple = (fromSquare_r, fromSquare_c + 1)
            elif toSquare_r == fromSquare_r and toSquare_c < fromSquare_c:
                newTuple = (fromSquare_r, fromSquare_c - 1)
            elif toSquare_r > fromSquare_r and toSquare_c > fromSquare_c:
                newTuple = (fromSquare_r + 1, fromSquare_c + 1)
            elif toSquare_r > fromSquare_r and toSquare_c < fromSquare_c:
                newTuple = (fromSquare_r + 1, fromSquare_c - 1)
            elif toSquare_r < fromSquare_r and toSquare_c > fromSquare_c:
                newTuple = (fromSquare_r - 1, fromSquare_c + 1)
            elif toSquare_r < fromSquare_r and toSquare_c < fromSquare_c:
                newTuple = (fromSquare_r - 1, fromSquare_c - 1)
            if board[newTuple[0]][newTuple[1]] != 'v':
                return False
            return self.caminoLimpio(board, newTuple, toTuple)




if __name__ == '__main__':
    from TableroUI import *
    cb = TableroUI()
    rules = Reglas()
    print rules.esJaquemate(cb.tablero, 'blanco')
    print rules.caminoLimpio(cb.tablero, (0, 0), (5, 5))
    print rules.caminoLimpio(cb.tablero, (1, 1), (5, 5))
