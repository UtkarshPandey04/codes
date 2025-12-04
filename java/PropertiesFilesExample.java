import java.io.FileInputStream;
import java.io.IOException;
import java.util.Properties;

public class PropertiesFilesExample {
  public static void main(String[] args) {
    Properties props = new Properties();

    // Load properties from a file

    try (FileInputStream in = new FileInputStream("config.properties")) {
      props.load(in);
    } catch (IOException e) {
      e.printStackTrace();
    }

    // Access properties

    String username = props.getProperty("username");
    String password = props.getProperty("password");

    System.out.println("Username: " + username);
    System.out.println("Password: " + password);

    //save to a file
    try (FileInputStream in = new FileInputStream("output.properties")) {
      props.store(null, "Updated properties");
    } catch (IOException e) {
      e.printStackTrace();
    }
    // now load file
    try (FileInputStream in = new FileInputStream("output.properties")) {
      props.load(in);
      System.out.println("Properties from output file:");
      for (String key : props.stringPropertyNames()) {
        System.out.println(key + ": " + props.getProperty(key));
      }
    } catch (IOException e) {
      e.printStackTrace();
  }

}
}
}
