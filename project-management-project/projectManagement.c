#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>

#define MAX_TEAM_MEMBERS 10
FILE *fptr;
DIR *dir;

typedef struct {
    char name[50];
    char description[200];
    char startDate[10];
    char endDate[10];
    char projectManager[50];
    char teamMembers[MAX_TEAM_MEMBERS][50];
    char priority[10];
    char status[15];
} Project;

void createProject(Project *project);
void printProject(Project *project);
void saveProject(Project *project);
int get_number_of_projects();
char get_project_names();

int main(){

  char menu_option[2];

  int project_number = get_number_of_projects();

  Project project;

  printf("There are [%d] projects\n", project_number);
  printf("Select from the menu\n");
  printf("1) Create Project\n");
  printf("2) Open Project\n");
  printf("3) Get list of projects\n");
  printf("\nChoice: ");
  fgets(menu_option, 3 ,stdin);

  switch (atoi(menu_option)){
    case 1:
      createProject(&project);
      printProject(&project);
      saveProject(&project);
      break;
    case 2:
      printf("Get Project Incomplete");
      break;
    case 3:
      //list all projects
      get_project_names();
      break;

    default:
      printf("Invalid selection");
      break;
  }

  //createProject(&project);
  //printProject(&project);
  //saveProject(&project);

  return 0;
};

void createProject(Project *project){
    printf("Enter project name: ");
    fgets(project->name, sizeof(project->name), stdin);

    printf("Enter project description: ");
    fgets(project->description, sizeof(project->description), stdin);

    printf("Enter start date (YYYY-MM-DD): ");
    fgets(project->startDate, sizeof(project->startDate), stdin);

    printf("Enter end date (YYYY-MM-DD): ");
    fgets(project->endDate, sizeof(project->endDate), stdin);

    printf("Enter project manager: ");
    fgets(project->projectManager, sizeof(project->projectManager), stdin);

    printf("Enter project priority (high/medium/low): ");
    fgets(project->priority, sizeof(project->priority), stdin);

    printf("Enter project status (planning/in progress/completed): ");
    fgets(project->status, sizeof(project->status), stdin);

    int i = 0;
    while (i < MAX_TEAM_MEMBERS) {
        printf("Enter team member %d (or 'done' to finish): ", i + 1);
        fgets(project->teamMembers[i], sizeof(project->teamMembers[i]), stdin);
        if (strncmp(project->teamMembers[i], "done", 4) == 0) {
          break;
        }
        i++;
    }
}

void printProject(Project *project) {
    printf("Project Name: %s", project->name);
    printf("Description: %s", project->description);
    printf("Start Date: %s", project->startDate);
    printf("End Date: %s", project->endDate);
    printf("Project Manager: %s", project->projectManager);
    printf("Priority: %s", project->priority);
    printf("Status: %s", project->status);

    printf("Team Members:\n");
    for (int i = 0; i < MAX_TEAM_MEMBERS && project->teamMembers[i][0] != '\0'; i++) {
        printf("  %s", project->teamMembers[i]);
    }
}

void saveProject(Project *project) {

  char file_name[40];
  
  sprintf(file_name, "%s.txt", strtok(project->name, "\n"));

  //write this to a text file.
  fptr = fopen(file_name, "w");

  if (fptr == NULL) {
   //Handle error opening the file
    perror("Error opening file");
    return;
  }

  fprintf(fptr,"%s\n", project->name);
  fprintf(fptr, "%s", project->description);
  fprintf(fptr, "%s", project->startDate);
  fprintf(fptr, "%s", project->endDate);
  fprintf(fptr, "%s", project->projectManager);
  fprintf(fptr, "%s", project->priority);
  fprintf(fptr, "%s", project->status);
  //fprintf(fptr, "Team Members:\n");
    for (int i = 0; i < MAX_TEAM_MEMBERS && project->teamMembers[i][0] != '\0'; i++) {
        fprintf(fptr, "  %s", project->teamMembers[i]);
    }

  fclose(fptr);
  
};

int get_number_of_projects() {
  struct dirent *file;
  dir = opendir(".");
  int file_count = 0;

  if (dir) {
      while ((file = readdir(dir)) != NULL) {
        char* extension;
        //printf("%s\n" , file->d_name); //print all directory name
        extension = strtok(file->d_name, ".");
        while( extension != NULL ) {
            //printf( "Extension Breakdown: %s\n", extension );
            if(strcmp(extension, "txt") == 0){
              file_count++;
            };
            extension = strtok(NULL, ".");
        };
      }
      closedir(dir); //close all directory
  };
  return file_count;
};

char get_project_names() {
  struct dirent *file;
  dir = opendir(".");
  char file_names[50] = {};

  if (dir) {
    while ((file = readdir(dir)) != NULL) {
      char* extension;
      extension = strtok(file->d_name, ".");
      while( extension != NULL ) {
        if(strcmp(extension, "txt") == 0){
          printf("%s\n", file->d_name);
        };
        extension = strtok(NULL, ".");
      };
    };
    closedir(dir); //close all directory
  };
};