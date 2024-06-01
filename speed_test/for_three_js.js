function for_three_js(n) {
    let sum = 0;
    for (let i = 0; i < n; i++) {
        for (let j = 0; j < n; j++) {
            for (let k = 0; k < n; k++) {
                sum++;
            }
        }
    }
    return sum;
}