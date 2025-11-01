<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>My C++ Calculator</title>
    <!-- Prism.js for syntax highlighting -->
    <link href="https://cdnjs.cloudflare.com/ajax/libs/prism/1.29.0/themes/prism-tomorrow.min.css" rel="stylesheet" />
    <style>
        body {
            font-family: Arial, sans-serif;
            max-width: 900px;
            margin: 50px auto;
            padding: 20px;
            background: #0d1117;
            color: #c9d1d9;
        }
        h1 {
            color: #58a6ff;
            text-align: center;
        }
        .section {
            background: #161b22;
            padding: 30px;
            margin: 20px 0;
            border-radius: 10px;
            border: 1px solid #30363d;
        }
        .output {
            background: #0d1117;
            border: 2px solid #238636;
            padding: 20px;
            border-radius: 8px;
            font-family: 'Courier New', monospace;
            color: #7ee787;
        }
        .download-btn {
            display: inline-block;
            padding: 12px 24px;
            background: #238636;
            color: white;
            text-decoration: none;
            border-radius: 6px;
            font-weight: bold;
            transition: 0.3s;
        }
        .download-btn:hover {
            background: #2ea043;
        }
        pre {
            margin: 0;
        }
    </style>
</head>
<body>
    <h1>📊 C++ Calculator Program</h1>
    
    <div class="section">
        <h2>📄 Source Code</h2>
        <a href="calculator.cpp" download class="download-btn">📥 Download calculator.cpp</a>
        <br><br>
        <pre><code class="language-cpp">#include &lt;iostream&gt;
using namespace std;

int main() {
    double num1, num2;
    char operation;
    
    cout &lt;&lt; "=== Calculator ===" &lt;&lt; endl;
    cout &lt;&lt; "Enter first number: ";
    cin &gt;&gt; num1;
    
    cout &lt;&lt; "Enter operation (+, -, *, /): ";
    cin &gt;&gt; operation;
    
    cout &lt;&lt; "Enter second number: ";
    cin &gt;&gt; num2;
    
    switch(operation) {
        case '+':
            cout &lt;&lt; "Result: " &lt;&lt; (num1 + num2) &lt;&lt; endl;
            break;
        case '-':
            cout &lt;&lt; "Result: " &lt;&lt; (num1 - num2) &lt;&lt; endl;
            break;
        case '*':
            cout &lt;&lt; "Result: " &lt;&lt; (num1 * num2) &lt;&lt; endl;
            break;
        case '/':
            if(num2 != 0)
                cout &lt;&lt; "Result: " &lt;&lt; (num1 / num2) &lt;&lt; endl;
            else
                cout &lt;&lt; "Error: Division by zero!" &lt;&lt; endl;
            break;
        default:
            cout &lt;&lt; "Invalid operation!" &lt;&lt; endl;
    }
    
    return 0;
}</code></pre>
    </div>
    
    <div class="section">
        <h2>🖥️ Example Output</h2>
        <div class="output">
=== Calculator ===<br>
Enter first number: 15<br>
Enter operation (+, -, *, /): *<br>
Enter second number: 3<br>
Result: 45
        </div>
    </div>
    
    <div class="section">
        <h2>🔧 How to Compile & Run</h2>
        <pre><code class="language-bash"># Compile
g++ calculator.cpp -o calculator

# Run
./calculator</code></pre>
    </div>
    
    <div class="section">
        <h2>✨ Features</h2>
        <ul>
            <li>Addition, Subtraction, Multiplication, Division</li>
            <li>Input validation</li>
            <li>Division by zero error handling</li>
            <li>User-friendly interface</li>
        </ul>
    </div>

    <script src="https://cdnjs.cloudflare.com/ajax/libs/prism/1.29.0/prism.min.js"></script>
    <script src="https://cdnjs.cloudflare.com/ajax/libs/prism/1.29.0/components/prism-cpp.min.js"></script>
    <script src="https://cdnjs.cloudflare.com/ajax/libs/prism/1.29.0/components/prism-bash.min.js"></script>
</body>
</html>
