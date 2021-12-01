def addition(*numbers) -> int:
    total_sum = 0
    for number in numbers:
        total_sum += number
    return total_sum


sum = addition(2, 3)
print(f'sum: {sum}')
