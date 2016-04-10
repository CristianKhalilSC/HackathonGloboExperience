 Shader "Flip Normals" {
          Properties {
             _Color ("Main Color", Color) = (1,1,1,1)
             _MainTex ("Color (RGB) Alpha (A)", 2D) = "white" {}
         }
          SubShader {
            
            Tags { "Queue"="Transparent" "RenderType"="Transparent" }
            
            Cull Front
            
            CGPROGRAM
            
            #pragma surface surf Lambert vertex:vert alpha
            sampler2D _MainTex;
            float4 _Color;
     
             struct Input {
                 float2 uv_MainTex;
                 float4 color : COLOR;
             };
            
            
            void vert(inout appdata_full v)
            {
                v.normal.xyz = v.normal * -1;
            }
            
            void surf (Input IN, inout SurfaceOutput o) {
                      fixed3 result = tex2D(_MainTex, IN.uv_MainTex);
                 o.Albedo = result.rgb;
                 o.Alpha =  _Color.a;
            }
            
            ENDCG
            
          }
          
          Fallback "Diffuse"
     }