## Memulai `React` dengan `Reason` dan `CRA`
1. Buat Project dengan `create-react-app`
```bash
create-react-app cra-with-reason 
```
2. Ubah `package.json`
```json
...
"scripts": {
    "start:re": "bsb -make-world -clean-world -w"
    "start:web": "react-scripts start",
    "start": "run-p start:*",
}
...
```
3. Tambahkan `bsconfig.json`
> diambail dari https://reasonml.github.io/reason-react/docs/en/installation
```json
{
  "name": "your-project-name",
  "reason": { "react-jsx": 3 },
  "bsc-flags": ["-bs-super-errors"],
  "sources": [
    {
      "dir": "src",
      "subdirs": true
    }
  ],
  "package-specs": [
    {
      "module": "es6",
      "in-source": true
    }
  ],
  "suffix": ".bs.js",
  "namespace": true,
  "bs-dependencies": [
    "reason-react"
  ],
  "ppx-flags": [],
  "refmt": 3
}
```
4. Install pustaka
```bash
yarn add -E reason-react bs-platform
yarn add -DE npm-run-all 
```
5. Start Hacking
```bash
yarn start
```

### Build 
```bash
yarn build
```
