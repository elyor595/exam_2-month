FROM node:alpine AS BUILDER

WORKDIR /app

COPY package*.json ./

RUN npm install

COPY . .

RUN npm run build


FROM node:alpine

WORKDIR /app

COPY --from=BUILDER /app .

RUN npm install --omit=dev

EXPOSE 3000

CMD ["npm", "run", "start:prod"]
