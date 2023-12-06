def rook_moves(square):
    col, row = square[0], int(square[1])
    
    # Horizontal moves
    horizontal_moves = [f'{chr(ord(col) + i)}{row}' for i in range(1, 9) if ord(col) + i <= ord('h')]
    horizontal_moves += [f'{chr(ord(col) - i)}{row}' for i in range(1, 9) if ord(col) - i >= ord('a')]

    # Vertical moves
    vertical_moves = [f'{col}{row + i}' for i in range(1, 9) if row + i <= 8]
    vertical_moves += [f'{col}{row - i}' for i in range(1, 9) if row - i >= 1]

    # Combine and print moves
    all_moves = horizontal_moves + vertical_moves
    print('\n'.join(all_moves))

# Input
t = int(input())
for _ in range(t):
    position = input().strip()
    rook_moves(position)
