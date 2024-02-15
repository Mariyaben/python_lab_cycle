{
  "nbformat": 4,
  "nbformat_minor": 0,
  "metadata": {
    "colab": {
      "provenance": [],
      "authorship_tag": "ABX9TyMw6YQ4+EbXhj07KQqM9e/T",
      "include_colab_link": true
    },
    "kernelspec": {
      "name": "python3",
      "display_name": "Python 3"
    },
    "language_info": {
      "name": "python"
    }
  },
  "cells": [
    {
      "cell_type": "markdown",
      "metadata": {
        "id": "view-in-github",
        "colab_type": "text"
      },
      "source": [
        "<a href=\"https://colab.research.google.com/github/Mariyaben/python_lab_cycle/blob/main/hi_cpp.cpp\" target=\"_parent\"><img src=\"https://colab.research.google.com/assets/colab-badge.svg\" alt=\"Open In Colab\"/></a>"
      ]
    },
    {
      "cell_type": "code",
      "execution_count": 1,
      "metadata": {
        "colab": {
          "base_uri": "https://localhost:8080/",
          "height": 106
        },
        "id": "kYS4-UMZs-46",
        "outputId": "a5f988b9-de32-497d-97fc-100ac74447c6"
      },
      "outputs": [
        {
          "output_type": "error",
          "ename": "SyntaxError",
          "evalue": "invalid syntax (<ipython-input-1-4ab7ba2cb444>, line 4)",
          "traceback": [
            "\u001b[0;36m  File \u001b[0;32m\"<ipython-input-1-4ab7ba2cb444>\"\u001b[0;36m, line \u001b[0;32m4\u001b[0m\n\u001b[0;31m    // Function to print first n natural numbers\u001b[0m\n\u001b[0m    ^\u001b[0m\n\u001b[0;31mSyntaxError\u001b[0m\u001b[0;31m:\u001b[0m invalid syntax\n"
          ]
        }
      ],
      "source": [
        "#include <iostream>\n",
        "#include <thread>\n",
        "\n",
        "// Function to print first n natural numbers\n",
        "void printNumbers(int n) {\n",
        "    for (int i = 1; i <= n; ++i) {\n",
        "        std::cout << i << \" \";\n",
        "    }\n",
        "    std::cout << std::endl;\n",
        "}\n",
        "\n",
        "int main() {\n",
        "    int n;\n",
        "    std::cout << \"Enter the value of n: \";\n",
        "    std::cin >> n;\n",
        "\n",
        "    // Create a thread to print numbers\n",
        "    std::thread t(printNumbers, n);\n",
        "\n",
        "    // Join the thread with the main thread\n",
        "    t.join();\n",
        "\n",
        "    return 0;\n",
        "}\n"
      ]
    }
  ]
}