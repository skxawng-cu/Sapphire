#include <Script/NativeScriptApi.h>
#include <ScriptObject.h>
#include <Zone/InstanceContent.h>

class CuttersCry : public InstanceContentScript
{
public:
   CuttersCry() : InstanceContentScript( 12 )
   { }

   void onInit( InstanceContentPtr instance ) override
   {
      
      instance->registerEObj( "Unknown0", 2000659, 0, 4, { -190.040604f, -4.267580f, -210.611801f }, 1.000000f );
      instance->registerEObj( "Unknown1", 2001133, 4323450, 4, { 268.610687f, -4.089700f, 104.917397f }, 1.000000f );
      instance->registerEObj( "Unknown2", 2001133, 4323451, 4, { 250.254807f, -3.751600f, 99.675102f }, 1.000000f );
      instance->registerEObj( "Unknown3", 2001133, 4323452, 4, { 268.589386f, -2.609000f, 88.017700f }, 1.000000f );
      instance->registerEObj( "Unknown4", 2001133, 4323453, 4, { 105.129799f, -0.534200f, 147.850800f }, 1.000000f );
      instance->registerEObj( "Unknown5", 2001133, 4323454, 4, { 119.166603f, 0.308000f, 155.483704f }, 1.000000f );
      instance->registerEObj( "Unknown6", 2001133, 4323455, 4, { 103.312500f, -0.406300f, 194.717194f }, 1.000000f );
      instance->registerEObj( "Unknown7", 2001133, 4323456, 4, { 73.898598f, 0.574600f, 187.497803f }, 1.000000f );
      instance->registerEObj( "Unknown8", 2001133, 4323457, 4, { 72.064903f, 0.259800f, 157.992203f }, 1.000000f );
      instance->registerEObj( "Unknown9", 2001133, 4323458, 4, { 116.819603f, -0.614000f, 179.620300f }, 1.000000f );
      instance->registerEObj( "Unknown10", 2001133, 4323459, 4, { -11.408770f, -1.184585f, 148.053894f }, 1.000000f );
      instance->registerEObj( "Unknown11", 2001133, 4323460, 4, { -46.669281f, 0.651785f, 135.550003f }, 1.000000f );
      instance->registerEObj( "Unknown12", 2001133, 4323462, 4, { -24.331600f, -1.221600f, 145.870697f }, 1.000000f );
      instance->registerEObj( "Unknown13", 2001133, 4323464, 4, { 15.181000f, -0.706100f, 126.443100f }, 1.000000f );
      instance->registerEObj( "Unknown14", 2001133, 4323468, 4, { -92.665901f, 4.399500f, 112.625504f }, 1.000000f );
      instance->registerEObj( "Entrance", 2000182, 4222581, 5, { 263.888306f, -0.101790f, 157.188995f }, 1.000000f );
      instance->registerEObj( "Shortcut", 2000700, 0, 4, { 265.520508f, 0.002038f, 142.558197f }, 1.000000f );
      instance->registerEObj( "Shiftingsands", 2000460, 4279880, 4, { 259.501709f, -3.500300f, 88.085403f }, 1.000000f );
      instance->registerEObj( "Shiftingsands", 2000461, 4279889, 4, { 79.087517f, 0.289220f, 152.208694f }, 0.991760f );
      instance->registerEObj( "Unknown16", 2000462, 4222616, 4, { -46.215149f, 6.077029f, 159.979706f }, 1.000000f );
      instance->registerEObj( "Unknown17", 2000463, 0, 4, { -48.096859f, 5.781024f, 159.723999f }, 1.000000f );
      instance->registerEObj( "Shiftingsands", 2000464, 4279890, 4, { -8.133057f, -5.813782f, 215.716797f }, 0.991760f );
      instance->registerEObj( "Shiftingsands", 2000465, 4279892, 4, { 301.838593f, -0.717224f, -111.039902f }, 0.991760f );
      instance->registerEObj( "Shiftingsands", 2000466, 4279893, 4, { 319.020294f, 0.259338f, -232.654297f }, 0.991760f );
      instance->registerEObj( "Unknown18", 2000467, 4374288, 4, { -146.843597f, -0.005151f, 184.227493f }, 1.000000f );
      instance->registerEObj( "Unknown19", 2000468, 0, 4, { -144.488297f, -0.192320f, 184.547104f }, 1.000000f );
      instance->registerEObj( "Shiftingsands", 2000469, 4279894, 4, { -144.457199f, -3.646973f, 134.843994f }, 0.991760f );
      instance->registerEObj( "Unknown20", 2000471, 4222648, 4, { -182.117905f, -0.203522f, -160.895706f }, 1.000000f );
      instance->registerEObj( "Unknown21", 2000472, 0, 4, { -179.869202f, -0.089300f, -160.548294f }, 1.000000f );
      instance->registerEObj( "Exit", 2000139, 0, 4, { -180.661194f, -4.240662f, -222.797607f }, 1.000000f );
   }

   void onUpdate( InstanceContentPtr instance, uint32_t currTime ) override
   {

   }

   void onEnterTerritory( Entity::Player &player, uint32_t eventId, uint16_t param1, uint16_t param2 ) override
   {

   }

};