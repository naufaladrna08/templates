/*
 * Compile dengan -lglfw3 -lGL -lX11 -lpthread -lXrandr -lXi -ldl
 */

#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

int main() {
  if (!glfwInit()) {
    std::cout << "Tidak dapat menginisialisasi GLFW, pulang sana!" << std::endl;
    return -1;
  } else {
    std::cout << "GLFW sudah terinisialisasi" << std::endl;
  }

  GLFWwindow* window;
  window = glfwCreateWindow(800, 600, "Belajar OpenGL", NULL, NULL);

  if (!window) {
    glfwTerminate();
    return -1;
  }

  
  glfwMakeContextCurrent(window);

  if (!gladLoadGLLoader((GLADloadproc) glfwGetProcAddress)) {
    std::cout << "Tidak dapat memuat fungsi OpenGL" << std::endl;
  
    glfwTerminate();
    return -1;
  }

  glViewport(0, 0, 800, 600);
  
  while (!glfwWindowShouldClose(window)) {
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(0.3f, 0.2f, 1.0f, 1.0f);

    glfwPollEvents();
    glfwSwapBuffers(window);
  }


  glfwTerminate();
  return 0;
}
