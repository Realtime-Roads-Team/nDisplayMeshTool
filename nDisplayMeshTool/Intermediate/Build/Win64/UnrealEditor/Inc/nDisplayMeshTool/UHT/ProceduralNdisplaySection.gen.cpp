// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "nDisplayMeshTool/Public/ProceduralNdisplaySection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProceduralNdisplaySection() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
NDISPLAYMESHTOOL_API UClass* Z_Construct_UClass_AProceduralNdisplaySection();
NDISPLAYMESHTOOL_API UClass* Z_Construct_UClass_AProceduralNdisplaySection_NoRegister();
NDISPLAYMESHTOOL_API UClass* Z_Construct_UClass_ULedProduct_NoRegister();
PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_nDisplayMeshTool();
// End Cross Module References

// Begin Class AProceduralNdisplaySection Function ConvertToStaticMesh
struct Z_Construct_UFunction_AProceduralNdisplaySection_ConvertToStaticMesh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "nDisplay Mesh Tool" },
		{ "Comment", "/** Function callable from the editor to generate the static mesh component */" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/ProceduralNdisplaySection.h" },
		{ "ToolTip", "Function callable from the editor to generate the static mesh component" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProceduralNdisplaySection_ConvertToStaticMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProceduralNdisplaySection, nullptr, "ConvertToStaticMesh", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProceduralNdisplaySection_ConvertToStaticMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProceduralNdisplaySection_ConvertToStaticMesh_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AProceduralNdisplaySection_ConvertToStaticMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProceduralNdisplaySection_ConvertToStaticMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProceduralNdisplaySection::execConvertToStaticMesh)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ConvertToStaticMesh();
	P_NATIVE_END;
}
// End Class AProceduralNdisplaySection Function ConvertToStaticMesh

// Begin Class AProceduralNdisplaySection Function GenerateProceduralMesh
struct Z_Construct_UFunction_AProceduralNdisplaySection_GenerateProceduralMesh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "nDisplay Mesh Tool" },
		{ "Comment", "/** Function callable from the editor to generate the procedural mesh component */" },
		{ "DisplayPriority", "0" },
		{ "ModuleRelativePath", "Public/ProceduralNdisplaySection.h" },
		{ "ToolTip", "Function callable from the editor to generate the procedural mesh component" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProceduralNdisplaySection_GenerateProceduralMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProceduralNdisplaySection, nullptr, "GenerateProceduralMesh", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProceduralNdisplaySection_GenerateProceduralMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProceduralNdisplaySection_GenerateProceduralMesh_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AProceduralNdisplaySection_GenerateProceduralMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProceduralNdisplaySection_GenerateProceduralMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProceduralNdisplaySection::execGenerateProceduralMesh)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GenerateProceduralMesh();
	P_NATIVE_END;
}
// End Class AProceduralNdisplaySection Function GenerateProceduralMesh

// Begin Class AProceduralNdisplaySection
void AProceduralNdisplaySection::StaticRegisterNativesAProceduralNdisplaySection()
{
	UClass* Class = AProceduralNdisplaySection::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ConvertToStaticMesh", &AProceduralNdisplaySection::execConvertToStaticMesh },
		{ "GenerateProceduralMesh", &AProceduralNdisplaySection::execGenerateProceduralMesh },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProceduralNdisplaySection);
UClass* Z_Construct_UClass_AProceduralNdisplaySection_NoRegister()
{
	return AProceduralNdisplaySection::StaticClass();
}
struct Z_Construct_UClass_AProceduralNdisplaySection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ProceduralNdisplaySection.h" },
		{ "ModuleRelativePath", "Public/ProceduralNdisplaySection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoUpdate_MetaData[] = {
		{ "Category", "nDisplay Mesh Tool" },
		{ "Comment", "/** Bool to enable automatic mesh generation on value change */" },
		{ "DisplayPriority", "0" },
		{ "ModuleRelativePath", "Public/ProceduralNdisplaySection.h" },
		{ "ToolTip", "Bool to enable automatic mesh generation on value change" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionToSnapTo_MetaData[] = {
		{ "Category", "nDisplay Mesh Tool" },
		{ "Comment", "/** Mesh Component that holds the generated procedural geometry */" },
		{ "DisplayPriority", "0" },
		{ "ModuleRelativePath", "Public/ProceduralNdisplaySection.h" },
		{ "ToolTip", "Mesh Component that holds the generated procedural geometry" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProceduralMeshComponent_MetaData[] = {
		{ "Category", "nDisplay Mesh Tool" },
		{ "Comment", "/** Mesh Component that holds the generated procedural geometry */" },
		{ "DisplayPriority", "0" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ProceduralNdisplaySection.h" },
		{ "ToolTip", "Mesh Component that holds the generated procedural geometry" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArrayWidth_MetaData[] = {
		{ "Category", "nDisplay Mesh Tool" },
		{ "Comment", "/** Volume/Wall Array Width */" },
		{ "DisplayPriority", "0" },
		{ "ModuleRelativePath", "Public/ProceduralNdisplaySection.h" },
		{ "ToolTip", "Volume/Wall Array Width" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArrayHeight_MetaData[] = {
		{ "Category", "nDisplay Mesh Tool" },
		{ "Comment", "/** Volume/Wall Array Height */" },
		{ "DisplayPriority", "0" },
		{ "ModuleRelativePath", "Public/ProceduralNdisplaySection.h" },
		{ "ToolTip", "Volume/Wall Array Height" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PanelAngles_MetaData[] = {
		{ "Category", "nDisplay Mesh Tool" },
		{ "ClampMax", "180.0" },
		{ "ClampMin", "-180.0" },
		{ "Comment", "/** Angular offset between each panel */" },
		{ "DisplayPriority", "0" },
		{ "ModuleRelativePath", "Public/ProceduralNdisplaySection.h" },
		{ "ToolTip", "Angular offset between each panel" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LedProductDataAsset_MetaData[] = {
		{ "Category", "nDisplay Mesh Tool" },
		{ "Comment", "/** Preset data asset for LED product */" },
		{ "DisplayPriority", "0" },
		{ "ModuleRelativePath", "Public/ProceduralNdisplaySection.h" },
		{ "ToolTip", "Preset data asset for LED product" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartingAngle_MetaData[] = {
		{ "Category", "nDisplay Mesh Tool" },
		{ "ClampMax", "180.0" },
		{ "ClampMin", "-180.0" },
		{ "Comment", "/** Angular offset between start and origin */" },
		{ "DisplayPriority", "0" },
		{ "ModuleRelativePath", "Public/ProceduralNdisplaySection.h" },
		{ "ToolTip", "Angular offset between start and origin" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartingPos_MetaData[] = {
		{ "Category", "nDisplay Mesh Tool" },
		{ "Comment", "/** Starting offset from origin */" },
		{ "DisplayPriority", "0" },
		{ "ModuleRelativePath", "Public/ProceduralNdisplaySection.h" },
		{ "ToolTip", "Starting offset from origin" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CumulativeAngle_MetaData[] = {
		{ "Category", "nDisplay Mesh Tool" },
		{ "ClampMax", "180.0" },
		{ "ClampMin", "-180.0" },
		{ "Comment", "/** Cumulative angle of all angular offsets */" },
		{ "DisplayPriority", "0" },
		{ "ModuleRelativePath", "Public/ProceduralNdisplaySection.h" },
		{ "ToolTip", "Cumulative angle of all angular offsets" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndingPos_MetaData[] = {
		{ "Category", "nDisplay Mesh Tool" },
		{ "Comment", "/** Position of final point to begin next section */" },
		{ "DisplayPriority", "0" },
		{ "ModuleRelativePath", "Public/ProceduralNdisplaySection.h" },
		{ "ToolTip", "Position of final point to begin next section" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModelName_MetaData[] = {
		{ "Category", "nDisplay Mesh Tool" },
		{ "Comment", "/** Name of the LED panel */" },
		{ "DisplayPriority", "0" },
		{ "ModuleRelativePath", "Public/ProceduralNdisplaySection.h" },
		{ "ToolTip", "Name of the LED panel" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CabinetSize_MetaData[] = {
		{ "Category", "nDisplay Mesh Tool" },
		{ "Comment", "/** Physical size of the LED panel in cm (X = width, Y = height, Z = depth) */" },
		{ "DisplayPriority", "0" },
		{ "ModuleRelativePath", "Public/ProceduralNdisplaySection.h" },
		{ "ToolTip", "Physical size of the LED panel in cm (X = width, Y = height, Z = depth)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CabinetResolutionX_MetaData[] = {
		{ "Category", "nDisplay Mesh Tool" },
		{ "Comment", "/** Resolution width (pixels) */" },
		{ "DisplayPriority", "0" },
		{ "ModuleRelativePath", "Public/ProceduralNdisplaySection.h" },
		{ "ToolTip", "Resolution width (pixels)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CabinetResolutionY_MetaData[] = {
		{ "Category", "nDisplay Mesh Tool" },
		{ "Comment", "/** Resolution height (pixels) */" },
		{ "DisplayPriority", "0" },
		{ "ModuleRelativePath", "Public/ProceduralNdisplaySection.h" },
		{ "ToolTip", "Resolution height (pixels)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PixelPitch_MetaData[] = {
		{ "Category", "nDisplay Mesh Tool" },
		{ "Comment", "/** Pixel Pitch in mm */" },
		{ "DisplayPriority", "0" },
		{ "ModuleRelativePath", "Public/ProceduralNdisplaySection.h" },
		{ "ToolTip", "Pixel Pitch in mm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PanelMaterial_MetaData[] = {
		{ "Category", "nDisplay Mesh Tool" },
		{ "Comment", "/** The material used for rendering the LED panel */" },
		{ "DisplayPriority", "0" },
		{ "ModuleRelativePath", "Public/ProceduralNdisplaySection.h" },
		{ "ToolTip", "The material used for rendering the LED panel" },
	};
#endif // WITH_METADATA
	static void NewProp_AutoUpdate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AutoUpdate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SectionToSnapTo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProceduralMeshComponent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ArrayWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ArrayHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PanelAngles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PanelAngles;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LedProductDataAsset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartingAngle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartingPos;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CumulativeAngle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndingPos;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ModelName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CabinetSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CabinetResolutionX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CabinetResolutionY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PixelPitch;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PanelMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AProceduralNdisplaySection_ConvertToStaticMesh, "ConvertToStaticMesh" }, // 2456390957
		{ &Z_Construct_UFunction_AProceduralNdisplaySection_GenerateProceduralMesh, "GenerateProceduralMesh" }, // 3067740645
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProceduralNdisplaySection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_AProceduralNdisplaySection_Statics::NewProp_AutoUpdate_SetBit(void* Obj)
{
	((AProceduralNdisplaySection*)Obj)->AutoUpdate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AProceduralNdisplaySection_Statics::NewProp_AutoUpdate = { "AutoUpdate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AProceduralNdisplaySection), &Z_Construct_UClass_AProceduralNdisplaySection_Statics::NewProp_AutoUpdate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoUpdate_MetaData), NewProp_AutoUpdate_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProceduralNdisplaySection_Statics::NewProp_SectionToSnapTo = { "SectionToSnapTo", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralNdisplaySection, SectionToSnapTo), Z_Construct_UClass_AProceduralNdisplaySection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionToSnapTo_MetaData), NewProp_SectionToSnapTo_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProceduralNdisplaySection_Statics::NewProp_ProceduralMeshComponent = { "ProceduralMeshComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralNdisplaySection, ProceduralMeshComponent), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProceduralMeshComponent_MetaData), NewProp_ProceduralMeshComponent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AProceduralNdisplaySection_Statics::NewProp_ArrayWidth = { "ArrayWidth", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralNdisplaySection, ArrayWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArrayWidth_MetaData), NewProp_ArrayWidth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AProceduralNdisplaySection_Statics::NewProp_ArrayHeight = { "ArrayHeight", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralNdisplaySection, ArrayHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArrayHeight_MetaData), NewProp_ArrayHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProceduralNdisplaySection_Statics::NewProp_PanelAngles_Inner = { "PanelAngles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AProceduralNdisplaySection_Statics::NewProp_PanelAngles = { "PanelAngles", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralNdisplaySection, PanelAngles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PanelAngles_MetaData), NewProp_PanelAngles_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProceduralNdisplaySection_Statics::NewProp_LedProductDataAsset = { "LedProductDataAsset", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralNdisplaySection, LedProductDataAsset), Z_Construct_UClass_ULedProduct_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LedProductDataAsset_MetaData), NewProp_LedProductDataAsset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProceduralNdisplaySection_Statics::NewProp_StartingAngle = { "StartingAngle", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralNdisplaySection, StartingAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartingAngle_MetaData), NewProp_StartingAngle_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AProceduralNdisplaySection_Statics::NewProp_StartingPos = { "StartingPos", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralNdisplaySection, StartingPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartingPos_MetaData), NewProp_StartingPos_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProceduralNdisplaySection_Statics::NewProp_CumulativeAngle = { "CumulativeAngle", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralNdisplaySection, CumulativeAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CumulativeAngle_MetaData), NewProp_CumulativeAngle_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AProceduralNdisplaySection_Statics::NewProp_EndingPos = { "EndingPos", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralNdisplaySection, EndingPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndingPos_MetaData), NewProp_EndingPos_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AProceduralNdisplaySection_Statics::NewProp_ModelName = { "ModelName", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralNdisplaySection, ModelName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModelName_MetaData), NewProp_ModelName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AProceduralNdisplaySection_Statics::NewProp_CabinetSize = { "CabinetSize", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralNdisplaySection, CabinetSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CabinetSize_MetaData), NewProp_CabinetSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AProceduralNdisplaySection_Statics::NewProp_CabinetResolutionX = { "CabinetResolutionX", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralNdisplaySection, CabinetResolutionX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CabinetResolutionX_MetaData), NewProp_CabinetResolutionX_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AProceduralNdisplaySection_Statics::NewProp_CabinetResolutionY = { "CabinetResolutionY", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralNdisplaySection, CabinetResolutionY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CabinetResolutionY_MetaData), NewProp_CabinetResolutionY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProceduralNdisplaySection_Statics::NewProp_PixelPitch = { "PixelPitch", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralNdisplaySection, PixelPitch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PixelPitch_MetaData), NewProp_PixelPitch_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProceduralNdisplaySection_Statics::NewProp_PanelMaterial = { "PanelMaterial", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralNdisplaySection, PanelMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PanelMaterial_MetaData), NewProp_PanelMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProceduralNdisplaySection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralNdisplaySection_Statics::NewProp_AutoUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralNdisplaySection_Statics::NewProp_SectionToSnapTo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralNdisplaySection_Statics::NewProp_ProceduralMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralNdisplaySection_Statics::NewProp_ArrayWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralNdisplaySection_Statics::NewProp_ArrayHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralNdisplaySection_Statics::NewProp_PanelAngles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralNdisplaySection_Statics::NewProp_PanelAngles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralNdisplaySection_Statics::NewProp_LedProductDataAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralNdisplaySection_Statics::NewProp_StartingAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralNdisplaySection_Statics::NewProp_StartingPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralNdisplaySection_Statics::NewProp_CumulativeAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralNdisplaySection_Statics::NewProp_EndingPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralNdisplaySection_Statics::NewProp_ModelName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralNdisplaySection_Statics::NewProp_CabinetSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralNdisplaySection_Statics::NewProp_CabinetResolutionX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralNdisplaySection_Statics::NewProp_CabinetResolutionY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralNdisplaySection_Statics::NewProp_PixelPitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralNdisplaySection_Statics::NewProp_PanelMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralNdisplaySection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AProceduralNdisplaySection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_nDisplayMeshTool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralNdisplaySection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AProceduralNdisplaySection_Statics::ClassParams = {
	&AProceduralNdisplaySection::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AProceduralNdisplaySection_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralNdisplaySection_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralNdisplaySection_Statics::Class_MetaDataParams), Z_Construct_UClass_AProceduralNdisplaySection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AProceduralNdisplaySection()
{
	if (!Z_Registration_Info_UClass_AProceduralNdisplaySection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProceduralNdisplaySection.OuterSingleton, Z_Construct_UClass_AProceduralNdisplaySection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AProceduralNdisplaySection.OuterSingleton;
}
template<> NDISPLAYMESHTOOL_API UClass* StaticClass<AProceduralNdisplaySection>()
{
	return AProceduralNdisplaySection::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AProceduralNdisplaySection);
AProceduralNdisplaySection::~AProceduralNdisplaySection() {}
// End Class AProceduralNdisplaySection

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_nDisplayMeshTool_Source_nDisplayMeshTool_Public_ProceduralNdisplaySection_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProceduralNdisplaySection, AProceduralNdisplaySection::StaticClass, TEXT("AProceduralNdisplaySection"), &Z_Registration_Info_UClass_AProceduralNdisplaySection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProceduralNdisplaySection), 1666186171U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_nDisplayMeshTool_Source_nDisplayMeshTool_Public_ProceduralNdisplaySection_h_168956691(TEXT("/Script/nDisplayMeshTool"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_nDisplayMeshTool_Source_nDisplayMeshTool_Public_ProceduralNdisplaySection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_nDisplayMeshTool_Source_nDisplayMeshTool_Public_ProceduralNdisplaySection_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
