/**
 * @param {number[]} arr
 * @return {number}
 */
var findLucky = function(arr) {
      let maxLucky = -1;

  for (let i = 0; i < arr.length; i++) {
    let num = arr[i];
    let count = 0;

    for (let j = 0; j < arr.length; j++) {
      if (arr[j] === num) {
        count++;
      }
    }

    if (count === num && num > maxLucky) {
      maxLucky = num;
    }
  }

  return maxLucky;
};