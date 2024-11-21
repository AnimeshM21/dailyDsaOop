import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.control.Label;
import javafx.scene.layout.StackPane;
import javafx.stage.Stage;

public class LabelsJavaFX extends Application {
    public static void main(String[] args) {
        launch(args);
    }

    @Override
    public void start(Stage primaryStage) {
        primaryStage.setTitle("JavaFX Basics");

        StackPane root = new StackPane();
        Scene scene = new Scene(root, 400, 300);
        Label myLabel = new Label("Hello, I am a Student");
        root.getChildren().add(myLabel);

        primaryStage.setScene(scene);
        primaryStage.show();
    }
}