/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function (init) {
     let a = init
     return {
          increment: () => { a += 1; return a },
          decrement: () => { a -= 1; return a },
          reset: () => { a = init; return a },
     }
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */