// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "nDisplayMeshTool/Public/LedProduct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLedProduct() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
NDISPLAYMESHTOOL_API UClass* Z_Construct_UClass_ULedProduct();
NDISPLAYMESHTOOL_API UClass* Z_Construct_UClass_ULedProduct_NoRegister();
UPackage* Z_Construct_UPackage__Script_nDisplayMeshTool();
// End Cross Module References

// Begin Class ULedProduct Function GetAspectRatio
struct Z_Construct_UFunction_ULedProduct_GetAspectRatio_Statics
{
	struct LedProduct_eventGetAspectRatio_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LED Panel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the aspect ratio of the panel (width/height) */" },
#endif
		{ "ModuleRelativePath", "Public/LedProduct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the aspect ratio of the panel (width/height)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULedProduct_GetAspectRatio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LedProduct_eventGetAspectRatio_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULedProduct_GetAspectRatio_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULedProduct_GetAspectRatio_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULedProduct_GetAspectRatio_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULedProduct_GetAspectRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULedProduct, nullptr, "GetAspectRatio", nullptr, nullptr, Z_Construct_UFunction_ULedProduct_GetAspectRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULedProduct_GetAspectRatio_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULedProduct_GetAspectRatio_Statics::LedProduct_eventGetAspectRatio_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULedProduct_GetAspectRatio_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULedProduct_GetAspectRatio_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULedProduct_GetAspectRatio_Statics::LedProduct_eventGetAspectRatio_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULedProduct_GetAspectRatio()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULedProduct_GetAspectRatio_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULedProduct::execGetAspectRatio)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetAspectRatio();
	P_NATIVE_END;
}
// End Class ULedProduct Function GetAspectRatio

// Begin Class ULedProduct Function PrintPanelInfo
struct Z_Construct_UFunction_ULedProduct_PrintPanelInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LED Panel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Prints debug information about the panel (Logs and shows message box in editor mode) */" },
#endif
		{ "ModuleRelativePath", "Public/LedProduct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Prints debug information about the panel (Logs and shows message box in editor mode)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULedProduct_PrintPanelInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULedProduct, nullptr, "PrintPanelInfo", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULedProduct_PrintPanelInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULedProduct_PrintPanelInfo_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULedProduct_PrintPanelInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULedProduct_PrintPanelInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULedProduct::execPrintPanelInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PrintPanelInfo();
	P_NATIVE_END;
}
// End Class ULedProduct Function PrintPanelInfo

// Begin Class ULedProduct
void ULedProduct::StaticRegisterNativesULedProduct()
{
	UClass* Class = ULedProduct::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAspectRatio", &ULedProduct::execGetAspectRatio },
		{ "PrintPanelInfo", &ULedProduct::execPrintPanelInfo },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULedProduct);
UClass* Z_Construct_UClass_ULedProduct_NoRegister()
{
	return ULedProduct::StaticClass();
}
struct Z_Construct_UClass_ULedProduct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * ULedProduct - A Data Asset class for defining LED Panel configurations to generate nDisplay volumes procedurally.\n * This is meant to be created and edited in the Content Browser to store panel specifications.\n */" },
#endif
		{ "IncludePath", "LedProduct.h" },
		{ "ModuleRelativePath", "Public/LedProduct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ULedProduct - A Data Asset class for defining LED Panel configurations to generate nDisplay volumes procedurally.\nThis is meant to be created and edited in the Content Browser to store panel specifications." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModelName_MetaData[] = {
		{ "Category", "LED Panel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Name of the LED panel */" },
#endif
		{ "ModuleRelativePath", "Public/LedProduct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the LED panel" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CabinetSize_MetaData[] = {
		{ "Category", "LED Panel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Physical size of the LED panel in cm (X = width, Y = height, Z = depth) */" },
#endif
		{ "ModuleRelativePath", "Public/LedProduct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Physical size of the LED panel in cm (X = width, Y = height, Z = depth)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CabinetResolutionX_MetaData[] = {
		{ "Category", "LED Panel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Resolution width (pixels) */" },
#endif
		{ "ModuleRelativePath", "Public/LedProduct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Resolution width (pixels)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CabinetResolutionY_MetaData[] = {
		{ "Category", "LED Panel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Resolution height (pixels) */" },
#endif
		{ "ModuleRelativePath", "Public/LedProduct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Resolution height (pixels)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PixelPitch_MetaData[] = {
		{ "Category", "LED Panel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pixel Pitch in mm */" },
#endif
		{ "ModuleRelativePath", "Public/LedProduct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pixel Pitch in mm" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PanelMaterial_MetaData[] = {
		{ "Category", "LED Panel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The material used for rendering the LED panel */" },
#endif
		{ "ModuleRelativePath", "Public/LedProduct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The material used for rendering the LED panel" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ModelName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CabinetSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CabinetResolutionX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CabinetResolutionY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PixelPitch;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PanelMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULedProduct_GetAspectRatio, "GetAspectRatio" }, // 2573490517
		{ &Z_Construct_UFunction_ULedProduct_PrintPanelInfo, "PrintPanelInfo" }, // 120717450
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULedProduct>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULedProduct_Statics::NewProp_ModelName = { "ModelName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULedProduct, ModelName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModelName_MetaData), NewProp_ModelName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULedProduct_Statics::NewProp_CabinetSize = { "CabinetSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULedProduct, CabinetSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CabinetSize_MetaData), NewProp_CabinetSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULedProduct_Statics::NewProp_CabinetResolutionX = { "CabinetResolutionX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULedProduct, CabinetResolutionX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CabinetResolutionX_MetaData), NewProp_CabinetResolutionX_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULedProduct_Statics::NewProp_CabinetResolutionY = { "CabinetResolutionY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULedProduct, CabinetResolutionY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CabinetResolutionY_MetaData), NewProp_CabinetResolutionY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULedProduct_Statics::NewProp_PixelPitch = { "PixelPitch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULedProduct, PixelPitch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PixelPitch_MetaData), NewProp_PixelPitch_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULedProduct_Statics::NewProp_PanelMaterial = { "PanelMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULedProduct, PanelMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PanelMaterial_MetaData), NewProp_PanelMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULedProduct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULedProduct_Statics::NewProp_ModelName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULedProduct_Statics::NewProp_CabinetSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULedProduct_Statics::NewProp_CabinetResolutionX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULedProduct_Statics::NewProp_CabinetResolutionY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULedProduct_Statics::NewProp_PixelPitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULedProduct_Statics::NewProp_PanelMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULedProduct_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULedProduct_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_nDisplayMeshTool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULedProduct_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULedProduct_Statics::ClassParams = {
	&ULedProduct::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULedProduct_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULedProduct_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULedProduct_Statics::Class_MetaDataParams), Z_Construct_UClass_ULedProduct_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULedProduct()
{
	if (!Z_Registration_Info_UClass_ULedProduct.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULedProduct.OuterSingleton, Z_Construct_UClass_ULedProduct_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULedProduct.OuterSingleton;
}
template<> NDISPLAYMESHTOOL_API UClass* StaticClass<ULedProduct>()
{
	return ULedProduct::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULedProduct);
ULedProduct::~ULedProduct() {}
// End Class ULedProduct

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_nDisplayMeshTool_DevelopmentProjects_nDisplay55_Plugins_nDisplayMeshTool_Source_nDisplayMeshTool_Public_LedProduct_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULedProduct, ULedProduct::StaticClass, TEXT("ULedProduct"), &Z_Registration_Info_UClass_ULedProduct, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULedProduct), 818141564U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_nDisplayMeshTool_DevelopmentProjects_nDisplay55_Plugins_nDisplayMeshTool_Source_nDisplayMeshTool_Public_LedProduct_h_2685125982(TEXT("/Script/nDisplayMeshTool"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_nDisplayMeshTool_DevelopmentProjects_nDisplay55_Plugins_nDisplayMeshTool_Source_nDisplayMeshTool_Public_LedProduct_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_nDisplayMeshTool_DevelopmentProjects_nDisplay55_Plugins_nDisplayMeshTool_Source_nDisplayMeshTool_Public_LedProduct_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
