function addition(numbers) {
    let total_sum = 0;
    for (const number of numbers) {
        total_sum += + number;
    }
    return total_sum;
}

const array = [2, 3];
const sum = addition(array);
console.log(sum);
