const exp = require('constants');
const fs = require('fs');
const myModule = (() => {
    const privateGetName = () => { };
    const privateGetLocation = [];

    const exported = {
        publicGetName: () => { },
        publicGetLocation: () => { }
    }
    return exported
});

console.log(myModule);
console.log(myModule.privateGetLocation, myModule.privateGetName);

function loadModules(filename, module, require) {
    const wrappedSrc = `(function (module, exports, require) {
        ${fs.readFileSync(filename, 'utf8')}
        (module, module.exports, require)`
    eval(wrappedSrc)
}

exports.loaded = false;
const b = require('./modB');

module.exports = {
    b, loaded: true
}
