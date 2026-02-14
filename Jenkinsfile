pipeline {
  agent any  // Run on any available node

  environment {
    IMAGE_NAME = 'amitnachum/daily-temperatures' // repo/name in Docker Hub
  }

  stages {
    stage('Checkout') {
      steps {
        git branch: 'main', url: 'https://github.com/AmitNachum/daily-temperatures.git' // Clone repo
      }
    }

    stage('Build Docker') {
      steps {
        sh 'docker build -t $IMAGE_NAME:latest .' // Build image
      }
    }

    stage('Push to Docker Hub') { 
      steps {
        withCredentials([usernamePassword( // An authorization file to read from private repo.
          credentialsId: 'daily_temp_docker',
          usernameVariable: 'DOCKER_USER',
          passwordVariable: 'DOCKER_PASS'
        )]) {
          sh '''
            echo "$DOCKER_PASS" | docker login -u "$DOCKER_USER" --password-stdin
            docker push "$IMAGE_NAME:latest"
            docker logout
          '''
        }
      }
    }
  }
}
