# Immutable-re benchmarks
[Immutable-re](https://github.com/facebookincubator/immutable-re) is very cool! How does the performance compare between:
* Immutable-re + Bucklescript vs. Javascript [near] equivalents?
* Immutable-re + Bucklescript vs Clojure(script)'s persistent data structures?
* Immutable-re (native) vs. Immutable-re + Bucklescript?

## Usage
```sh
npm install
npm run build:bs # Reason => JS
# In a separate terminal
npm run build:rollup

# Run Immutable-re + Bucklescript benchmarks
node out/main.js
```
