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