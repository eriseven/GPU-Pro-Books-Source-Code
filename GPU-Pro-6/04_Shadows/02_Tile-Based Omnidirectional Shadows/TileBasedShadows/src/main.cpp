// Copyright (c) Dr. Hawar Doghramachi. All rights reserved.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS *AS 
// IS* AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, 
// THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR 
// PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL COPYRIGHT HOLDERS OR CONTRIBUTORS 
// BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR 
// CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF 
// SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS 
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN 
// CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) 
// ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE 
// POSSIBILITY OF SUCH DAMAGE.
//
// This demo application demonstrates the "Tile-based Omnidirectional Shadows"
// technique. As reference shadowing technique a layered cube map-based shadow
// mapping approach is chosen. For the lighting the "Tiled Deferred Shading" 
// technique is used. The main purpose of this demo is to deliver structured
// and easy understandable code. Therefore optimizations like visibility culling
// of meshes or hardware occlusion query of lights are not used. 

#include <stdafx.h>
#include <Application.h>

#ifndef UNIX_PORT
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
#else
extern "C" int main(int argc, char **argv)
#endif /* UNIX_PORT */
{   
  Application *app = new Application;
  if((!app) || (!app->Init()))
  { 
    SAFE_DELETE(app);
    return E_FAIL;  
  }
  app->Run();
  app->Shutdown();
  SAFE_DELETE(app);
  return 0;
}




