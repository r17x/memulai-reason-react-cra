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
3. Install pustaka
```bash
yarn add -E reason-react bs-platform
yarn add -DE npm-run-all 
```
4. Start Hacking
```bash
yarn start
```

### Build 
```bash
yarn build
```
