function setup() {
    initializeFields();
    createCanvas(400, 300);
    textSize(40);
}

var choice;

function draw() {
    background(color(0x63, 0xD2, 0xFC));
    fill(color(0xE8, 0x63, 0xFC));
    if (choice == 0)
        rect(50, 50, 150, 2);
    if (choice == 2)
        rect(50, 100, 150, 2);
    if (choice == 3)
        rect(50, 150, 150, 2);
    text("早安", 50, 50);
    text("午安", 50, 100);
    text("晚安", 50, 150);
}

function mousePressed() {
    choice = (choice + 1) % 3;
}

function initializeFields() {
    choice = -1;
}
