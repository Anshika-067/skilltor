// Get Main Canvas and Rendering Context
const gameCanvas = document.getElementById('game-canvas');
const ctx = gameCanvas.getContext('2D'); // get me the tools i need to draw in 2d 

function resizeGameCanvas() {
    gameCanvas.width = window.innerWidth;
    gameCanvas.height = window.innerHeight;
}
/*  other events : 
Mouse clicked       → click
Keyboard pressed    → keydown
Keyboard released   → keyup
Window resized      → resize
Mouse moved         → mousemove   */


// set initial size
resizeGameCanvas();

// automatticaly updates canvas internal size when window resizes
window.addEventListener('resize', resizeGameCanvas);  // when 'resize' event happens , run the resizeGameCanvas() ---> so that the canvas gets resized

function render() {        //   The job of this function is: Draw one frame of your game

    ctx.clearRect(0, 0, gameCanvas.width, gameCanvas.height);  //  clearRect() clears a rectangular area of the canvas.
    /*
Start at x = 0
Start at y = 0
Clear entire canvas width
Clear entire canvas height

 so ---> Clear the entire screen before drawing the next frame.
 */

    ctx.fillStyle = '#4CAF50'; //  fillStyle determines the color used when filling shapes
    ctx.fillRect((gameCanvas.width / 2)- 25, (gameCanvas.height / 2) - 25, 50, 50);  // draws a filled rectangle 

  requestAnimationFrame(render);  //  It tells the browser: "Run render again on the next    animation frame."
}
// start rendering loop
requestAnimationFrame(render);

