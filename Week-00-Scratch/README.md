<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
</head>
<body>

  <h1>📦 CS50x – Week 0: Scratch Project</h1>

  <h2>🎮 Project: Catch the Ball</h2>
  <p>
    Welcome to my very first CS50x project — a game created using <a href="https://scratch.mit.edu/" target="_blank">Scratch</a>.<br>
    In this simple interactive game, the player controls a basket sprite that must catch falling balls to increase their score.
    The game showcases key programming concepts such as conditionals, loops, variables, and custom blocks.
  </p>

  <hr>

  <h2>🔗 Live Project Link</h2>
  <p>👉 <a href="https://scratch.mit.edu/projects/1198601717" target="_blank">Click here to play "Catch the Ball"</a></p>

  <hr>

  <h2>🧠 Project Features & CS50x Requirements</h2>
  <table border="1" cellspacing="0" cellpadding="8">
    <tr>
      <th>Requirement</th>
      <th>✅ Status</th>
      <th>Description</th>
    </tr>
    <tr>
      <td><strong>At least 2 sprites</strong></td>
      <td>✅</td>
      <td>Basket (player-controlled) and Ball (falling object). Only one sprite is the default cat.</td>
    </tr>
    <tr>
      <td><strong>At least 3 scripts</strong></td>
      <td>✅</td>
      <td>1 script for basket control, 1 for ball behavior, 1 for scoring and resetting logic.</td>
    </tr>
    <tr>
      <td><strong>At least 1 conditional</strong></td>
      <td>✅</td>
      <td><code>if &lt;touching basket&gt;</code> used to check if the ball was caught.</td>
    </tr>
    <tr>
      <td><strong>At least 1 loop</strong></td>
      <td>✅</td>
      <td><code>forever</code> loops used for continuous motion and checks.</td>
    </tr>
    <tr>
      <td><strong>At least 1 variable</strong></td>
      <td>✅</td>
      <td><code>score</code> variable increases when the basket catches a ball.</td>
    </tr>
    <tr>
      <td><strong>At least 1 custom block with input</strong></td>
      <td>✅</td>
      <td>A custom block like <code>fall(speed)</code> is used to modularize falling logic with speed as input.</td>
    </tr>
  </table>

  <hr>

  <h2>🧩 Custom Block Example</h2>
  <p><strong>Block Name:</strong> <code>fall(speed)</code><br>
  <strong>Purpose:</strong> Allows the ball to fall downward at a user-defined speed. Makes the game logic clean and reusable.</p>

  <pre>
define fall (speed)
change y by (speed)
  </pre>

  <hr>

  <h2>🧪 How the Game Works</h2>
  <ul>
    <li>The <strong>basket sprite</strong> follows the mouse horizontally.</li>
    <li>The <strong>ball sprite</strong> falls from the top of the screen.</li>
    <li>If the <strong>ball touches the basket</strong>, the score increases and the ball resets to the top.</li>
    <li>If the <strong>ball hits the ground</strong>, it resets without increasing the score.</li>
    <li>The game uses loops, broadcasts, and conditionals to keep running continuously.</li>
  </ul>

  <hr>

  <h2>📚 CS50x Week 0 Lecture Resources</h2>
  <ul>
    <li>📺 <a href="https://cs50.harvard.edu/x/2025/weeks/0/" target="_blank">Lecture Video</a></li>
    <li>📝 <a href="https://cs50.harvard.edu/x/2025/notes/0/" target="_blank">Lecture Notes</a></li>
    <li>📊 <a href="https://cdn.cs50.net/2024/fall/lectures/0/lecture0.pdf" target="_blank">Slides (PDF)</a></li>
    <li>💾 <a href="https://cdn.cs50.net/2024/fall/lectures/0/src0.zip" target="_blank">Source Code Examples</a></li>
  </ul>

  <hr>

  <h2>💡 What I Learned</h2>
  <ul>
    <li>How to translate logic into visual blocks using Scratch</li>
    <li>Core programming ideas: conditionals, loops, variables, and events</li>
    <li>How to build modular code using <strong>custom blocks</strong></li>
    <li>Interactive game design and player feedback</li>
    <li>Debugging using visual tools and testing behavior step-by-step</li>
  </ul>

  <hr>

  <h2>🛠️ How to Run the Project</h2>
  <ol>
    <li>Visit the <a href="https://scratch.mit.edu/projects/1198601717" target="_blank">project link</a></li>
    <li>Click the green <strong>flag</strong> to start the game</li>
    <li>Move your mouse to control the basket and <strong>catch the falling balls</strong></li>
    <li>Watch your score increase as you play!</li>
  </ol>

  <hr>

  <h2>📁 Directory Structure</h2>
  <pre>
Week0/
└── README.md
  </pre>

  <p>Thanks for checking out my first CS50x project! Looking forward to diving into C and low-level programming in Week 1! 💻🚀</p>

</body>
</html>
