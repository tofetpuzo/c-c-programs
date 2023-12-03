from flask import Flask, render_template


def create_app():
    app = Flask(__name__)

    @app.route('/')
    def index():
        text = ""
        for i in range(10):
            text += str(i) + " "
            
        return render_template('index.html', **locals())

    return app


    

if __name__ == '__main__':
    app = create_app()
    app.run(debug=True)


