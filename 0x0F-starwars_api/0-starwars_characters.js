#!/usr/bin/node
const request = require('request');
// const url = 'http://swapi.co/api/films/' + process.argv[2];  // original
const url = 'https://swapi-api.hbtn.io/api/films/' + process.argv[2];
// THIS IS FROM
// holbertonschool-higher_level_programming/0x15-javascript-web_jquery/8-script.py

request(url, async function (error, response, body) {
  if (error) return console.error(error);
  const characters = JSON.parse(body).characters;
  for (const character of characters) {
    await new Promise(function (resolve, reject) {
      request(character, function (err, func, bod) {
        if (err) return console.error(err);
        console.log(JSON.parse(bod).name);
        resolve();
      });
    });
  }
});
