var app = {
    // Application Constructor
    initialize: function() {
        document.addEventListener('deviceready', this.onDeviceReady.bind(this), false);
    },

    // deviceready Event Handler
    //
    // Bind any cordova events here. Common events are:
    // 'pause', 'resume', etc.
    onDeviceReady: function() {
        this.receivedEvent('deviceready');
    },
};

app.initialize();

// Crop Image || Pinch To zoom
function cropImage(type) {
    console.log("Test Plugin");

    navigator.camera.getPicture(onSuccess, onFail, {
        quality: 50,
        destinationType: Camera.DestinationType.FILE_URI
    });

    function onSuccess(imageData) {

        console.log(imageData);

        var image = document.getElementById('myImageFull');
        image.src = imageData;

        /*Crop Image Plugin Code*/
        plugins.crop(function success(data) {

                // alert(data);
                console.log(data);
                var image = document.getElementById('myImage');
                image.src = data;
            },
            function fail() {

            }, imageData, { quality: 100, cropType: type });
    }

    function onFail(message) {
        alert('Failed because: ' + message);
    }
}