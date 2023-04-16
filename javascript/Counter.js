/**
 * @param {number} n
 * @return {Function} counter
 */
createCounter = function (n) {
     return function counter() {
          return n++;
     };
};

/**
 * const counter = createCounter(10)
 * counter() // 10
 * counter() // 11
 * counter() // 12
 */