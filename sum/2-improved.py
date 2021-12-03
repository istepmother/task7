def addition(*args) -> int:
    total_sum = 0
    for x in args:
        total_sum += x
    return total_sum    


sum = addition(2, 3)
print(f'sum: {sum}')
