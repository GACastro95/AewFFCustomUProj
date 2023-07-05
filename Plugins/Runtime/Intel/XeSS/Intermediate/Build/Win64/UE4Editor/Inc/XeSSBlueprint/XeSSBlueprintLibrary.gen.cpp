// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XeSSBlueprint/Public/XeSSBlueprintLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXeSSBlueprintLibrary() {}
// Cross Module References
	XESSBLUEPRINT_API UClass* Z_Construct_UClass_UXeSSBlueprintLibrary_NoRegister();
	XESSBLUEPRINT_API UClass* Z_Construct_UClass_UXeSSBlueprintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_XeSSBlueprint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	XESSBLUEPRINT_API UEnum* Z_Construct_UEnum_XeSSBlueprint_EXeSSQualityMode();
// End Cross Module References
	DEFINE_FUNCTION(UXeSSBlueprintLibrary::execGetDefaultXeSSQualityMode)
	{
		P_GET_STRUCT(FIntPoint,Z_Param_ScreenResolution);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EXeSSQualityMode*)Z_Param__Result=UXeSSBlueprintLibrary::GetDefaultXeSSQualityMode(Z_Param_ScreenResolution);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXeSSBlueprintLibrary::execGetSupportedXeSSQualityModes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<EXeSSQualityMode>*)Z_Param__Result=UXeSSBlueprintLibrary::GetSupportedXeSSQualityModes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXeSSBlueprintLibrary::execGetXeSSQualityMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EXeSSQualityMode*)Z_Param__Result=UXeSSBlueprintLibrary::GetXeSSQualityMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXeSSBlueprintLibrary::execGetXeSSQualityModeInformation)
	{
		P_GET_ENUM(EXeSSQualityMode,Z_Param_QualityMode);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_ScreenPercentage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UXeSSBlueprintLibrary::GetXeSSQualityModeInformation(EXeSSQualityMode(Z_Param_QualityMode),Z_Param_Out_ScreenPercentage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXeSSBlueprintLibrary::execIsXeSSSupported)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UXeSSBlueprintLibrary::IsXeSSSupported();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXeSSBlueprintLibrary::execSetXeSSQualityMode)
	{
		P_GET_ENUM(EXeSSQualityMode,Z_Param_QualityMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		UXeSSBlueprintLibrary::SetXeSSQualityMode(EXeSSQualityMode(Z_Param_QualityMode));
		P_NATIVE_END;
	}
	void UXeSSBlueprintLibrary::StaticRegisterNativesUXeSSBlueprintLibrary()
	{
		UClass* Class = UXeSSBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDefaultXeSSQualityMode", &UXeSSBlueprintLibrary::execGetDefaultXeSSQualityMode },
			{ "GetSupportedXeSSQualityModes", &UXeSSBlueprintLibrary::execGetSupportedXeSSQualityModes },
			{ "GetXeSSQualityMode", &UXeSSBlueprintLibrary::execGetXeSSQualityMode },
			{ "GetXeSSQualityModeInformation", &UXeSSBlueprintLibrary::execGetXeSSQualityModeInformation },
			{ "IsXeSSSupported", &UXeSSBlueprintLibrary::execIsXeSSSupported },
			{ "SetXeSSQualityMode", &UXeSSBlueprintLibrary::execSetXeSSQualityMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UXeSSBlueprintLibrary_GetDefaultXeSSQualityMode_Statics
	{
		struct XeSSBlueprintLibrary_eventGetDefaultXeSSQualityMode_Parms
		{
			FIntPoint ScreenResolution;
			EXeSSQualityMode ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScreenResolution;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UXeSSBlueprintLibrary_GetDefaultXeSSQualityMode_Statics::NewProp_ScreenResolution = { "ScreenResolution", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XeSSBlueprintLibrary_eventGetDefaultXeSSQualityMode_Parms, ScreenResolution), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UXeSSBlueprintLibrary_GetDefaultXeSSQualityMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UXeSSBlueprintLibrary_GetDefaultXeSSQualityMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XeSSBlueprintLibrary_eventGetDefaultXeSSQualityMode_Parms, ReturnValue), Z_Construct_UEnum_XeSSBlueprint_EXeSSQualityMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXeSSBlueprintLibrary_GetDefaultXeSSQualityMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXeSSBlueprintLibrary_GetDefaultXeSSQualityMode_Statics::NewProp_ScreenResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXeSSBlueprintLibrary_GetDefaultXeSSQualityMode_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXeSSBlueprintLibrary_GetDefaultXeSSQualityMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXeSSBlueprintLibrary_GetDefaultXeSSQualityMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XeSSBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXeSSBlueprintLibrary_GetDefaultXeSSQualityMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXeSSBlueprintLibrary, nullptr, "GetDefaultXeSSQualityMode", nullptr, nullptr, sizeof(XeSSBlueprintLibrary_eventGetDefaultXeSSQualityMode_Parms), Z_Construct_UFunction_UXeSSBlueprintLibrary_GetDefaultXeSSQualityMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXeSSBlueprintLibrary_GetDefaultXeSSQualityMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXeSSBlueprintLibrary_GetDefaultXeSSQualityMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXeSSBlueprintLibrary_GetDefaultXeSSQualityMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXeSSBlueprintLibrary_GetDefaultXeSSQualityMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXeSSBlueprintLibrary_GetDefaultXeSSQualityMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXeSSBlueprintLibrary_GetSupportedXeSSQualityModes_Statics
	{
		struct XeSSBlueprintLibrary_eventGetSupportedXeSSQualityModes_Parms
		{
			TArray<EXeSSQualityMode> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UXeSSBlueprintLibrary_GetSupportedXeSSQualityModes_Statics::NewProp_ReturnValue_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UXeSSBlueprintLibrary_GetSupportedXeSSQualityModes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_XeSSBlueprint_EXeSSQualityMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UXeSSBlueprintLibrary_GetSupportedXeSSQualityModes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XeSSBlueprintLibrary_eventGetSupportedXeSSQualityModes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXeSSBlueprintLibrary_GetSupportedXeSSQualityModes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXeSSBlueprintLibrary_GetSupportedXeSSQualityModes_Statics::NewProp_ReturnValue_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXeSSBlueprintLibrary_GetSupportedXeSSQualityModes_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXeSSBlueprintLibrary_GetSupportedXeSSQualityModes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXeSSBlueprintLibrary_GetSupportedXeSSQualityModes_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XeSSBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXeSSBlueprintLibrary_GetSupportedXeSSQualityModes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXeSSBlueprintLibrary, nullptr, "GetSupportedXeSSQualityModes", nullptr, nullptr, sizeof(XeSSBlueprintLibrary_eventGetSupportedXeSSQualityModes_Parms), Z_Construct_UFunction_UXeSSBlueprintLibrary_GetSupportedXeSSQualityModes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXeSSBlueprintLibrary_GetSupportedXeSSQualityModes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXeSSBlueprintLibrary_GetSupportedXeSSQualityModes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXeSSBlueprintLibrary_GetSupportedXeSSQualityModes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXeSSBlueprintLibrary_GetSupportedXeSSQualityModes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXeSSBlueprintLibrary_GetSupportedXeSSQualityModes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXeSSBlueprintLibrary_GetXeSSQualityMode_Statics
	{
		struct XeSSBlueprintLibrary_eventGetXeSSQualityMode_Parms
		{
			EXeSSQualityMode ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UXeSSBlueprintLibrary_GetXeSSQualityMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UXeSSBlueprintLibrary_GetXeSSQualityMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XeSSBlueprintLibrary_eventGetXeSSQualityMode_Parms, ReturnValue), Z_Construct_UEnum_XeSSBlueprint_EXeSSQualityMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXeSSBlueprintLibrary_GetXeSSQualityMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXeSSBlueprintLibrary_GetXeSSQualityMode_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXeSSBlueprintLibrary_GetXeSSQualityMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXeSSBlueprintLibrary_GetXeSSQualityMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XeSSBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXeSSBlueprintLibrary_GetXeSSQualityMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXeSSBlueprintLibrary, nullptr, "GetXeSSQualityMode", nullptr, nullptr, sizeof(XeSSBlueprintLibrary_eventGetXeSSQualityMode_Parms), Z_Construct_UFunction_UXeSSBlueprintLibrary_GetXeSSQualityMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXeSSBlueprintLibrary_GetXeSSQualityMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXeSSBlueprintLibrary_GetXeSSQualityMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXeSSBlueprintLibrary_GetXeSSQualityMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXeSSBlueprintLibrary_GetXeSSQualityMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXeSSBlueprintLibrary_GetXeSSQualityMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXeSSBlueprintLibrary_GetXeSSQualityModeInformation_Statics
	{
		struct XeSSBlueprintLibrary_eventGetXeSSQualityModeInformation_Parms
		{
			EXeSSQualityMode QualityMode;
			float ScreenPercentage;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_QualityMode_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_QualityMode;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenPercentage;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UXeSSBlueprintLibrary_GetXeSSQualityModeInformation_Statics::NewProp_QualityMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UXeSSBlueprintLibrary_GetXeSSQualityModeInformation_Statics::NewProp_QualityMode = { "QualityMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XeSSBlueprintLibrary_eventGetXeSSQualityModeInformation_Parms, QualityMode), Z_Construct_UEnum_XeSSBlueprint_EXeSSQualityMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UXeSSBlueprintLibrary_GetXeSSQualityModeInformation_Statics::NewProp_ScreenPercentage = { "ScreenPercentage", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XeSSBlueprintLibrary_eventGetXeSSQualityModeInformation_Parms, ScreenPercentage), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UXeSSBlueprintLibrary_GetXeSSQualityModeInformation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((XeSSBlueprintLibrary_eventGetXeSSQualityModeInformation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXeSSBlueprintLibrary_GetXeSSQualityModeInformation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XeSSBlueprintLibrary_eventGetXeSSQualityModeInformation_Parms), &Z_Construct_UFunction_UXeSSBlueprintLibrary_GetXeSSQualityModeInformation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXeSSBlueprintLibrary_GetXeSSQualityModeInformation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXeSSBlueprintLibrary_GetXeSSQualityModeInformation_Statics::NewProp_QualityMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXeSSBlueprintLibrary_GetXeSSQualityModeInformation_Statics::NewProp_QualityMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXeSSBlueprintLibrary_GetXeSSQualityModeInformation_Statics::NewProp_ScreenPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXeSSBlueprintLibrary_GetXeSSQualityModeInformation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXeSSBlueprintLibrary_GetXeSSQualityModeInformation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XeSSBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXeSSBlueprintLibrary_GetXeSSQualityModeInformation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXeSSBlueprintLibrary, nullptr, "GetXeSSQualityModeInformation", nullptr, nullptr, sizeof(XeSSBlueprintLibrary_eventGetXeSSQualityModeInformation_Parms), Z_Construct_UFunction_UXeSSBlueprintLibrary_GetXeSSQualityModeInformation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXeSSBlueprintLibrary_GetXeSSQualityModeInformation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXeSSBlueprintLibrary_GetXeSSQualityModeInformation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXeSSBlueprintLibrary_GetXeSSQualityModeInformation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXeSSBlueprintLibrary_GetXeSSQualityModeInformation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXeSSBlueprintLibrary_GetXeSSQualityModeInformation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXeSSBlueprintLibrary_IsXeSSSupported_Statics
	{
		struct XeSSBlueprintLibrary_eventIsXeSSSupported_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UXeSSBlueprintLibrary_IsXeSSSupported_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((XeSSBlueprintLibrary_eventIsXeSSSupported_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXeSSBlueprintLibrary_IsXeSSSupported_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XeSSBlueprintLibrary_eventIsXeSSSupported_Parms), &Z_Construct_UFunction_UXeSSBlueprintLibrary_IsXeSSSupported_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXeSSBlueprintLibrary_IsXeSSSupported_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXeSSBlueprintLibrary_IsXeSSSupported_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXeSSBlueprintLibrary_IsXeSSSupported_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XeSSBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXeSSBlueprintLibrary_IsXeSSSupported_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXeSSBlueprintLibrary, nullptr, "IsXeSSSupported", nullptr, nullptr, sizeof(XeSSBlueprintLibrary_eventIsXeSSSupported_Parms), Z_Construct_UFunction_UXeSSBlueprintLibrary_IsXeSSSupported_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXeSSBlueprintLibrary_IsXeSSSupported_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXeSSBlueprintLibrary_IsXeSSSupported_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXeSSBlueprintLibrary_IsXeSSSupported_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXeSSBlueprintLibrary_IsXeSSSupported()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXeSSBlueprintLibrary_IsXeSSSupported_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXeSSBlueprintLibrary_SetXeSSQualityMode_Statics
	{
		struct XeSSBlueprintLibrary_eventSetXeSSQualityMode_Parms
		{
			EXeSSQualityMode QualityMode;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_QualityMode_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_QualityMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UXeSSBlueprintLibrary_SetXeSSQualityMode_Statics::NewProp_QualityMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UXeSSBlueprintLibrary_SetXeSSQualityMode_Statics::NewProp_QualityMode = { "QualityMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XeSSBlueprintLibrary_eventSetXeSSQualityMode_Parms, QualityMode), Z_Construct_UEnum_XeSSBlueprint_EXeSSQualityMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXeSSBlueprintLibrary_SetXeSSQualityMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXeSSBlueprintLibrary_SetXeSSQualityMode_Statics::NewProp_QualityMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXeSSBlueprintLibrary_SetXeSSQualityMode_Statics::NewProp_QualityMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXeSSBlueprintLibrary_SetXeSSQualityMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XeSSBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXeSSBlueprintLibrary_SetXeSSQualityMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXeSSBlueprintLibrary, nullptr, "SetXeSSQualityMode", nullptr, nullptr, sizeof(XeSSBlueprintLibrary_eventSetXeSSQualityMode_Parms), Z_Construct_UFunction_UXeSSBlueprintLibrary_SetXeSSQualityMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXeSSBlueprintLibrary_SetXeSSQualityMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXeSSBlueprintLibrary_SetXeSSQualityMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXeSSBlueprintLibrary_SetXeSSQualityMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXeSSBlueprintLibrary_SetXeSSQualityMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXeSSBlueprintLibrary_SetXeSSQualityMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UXeSSBlueprintLibrary_NoRegister()
	{
		return UXeSSBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UXeSSBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UXeSSBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_XeSSBlueprint,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UXeSSBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UXeSSBlueprintLibrary_GetDefaultXeSSQualityMode, "GetDefaultXeSSQualityMode" }, // 3105369925
		{ &Z_Construct_UFunction_UXeSSBlueprintLibrary_GetSupportedXeSSQualityModes, "GetSupportedXeSSQualityModes" }, // 3012180388
		{ &Z_Construct_UFunction_UXeSSBlueprintLibrary_GetXeSSQualityMode, "GetXeSSQualityMode" }, // 1982935041
		{ &Z_Construct_UFunction_UXeSSBlueprintLibrary_GetXeSSQualityModeInformation, "GetXeSSQualityModeInformation" }, // 78619845
		{ &Z_Construct_UFunction_UXeSSBlueprintLibrary_IsXeSSSupported, "IsXeSSSupported" }, // 2936886296
		{ &Z_Construct_UFunction_UXeSSBlueprintLibrary_SetXeSSQualityMode, "SetXeSSQualityMode" }, // 3267202654
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXeSSBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "XeSSBlueprintLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/XeSSBlueprintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UXeSSBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UXeSSBlueprintLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UXeSSBlueprintLibrary_Statics::ClassParams = {
		&UXeSSBlueprintLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UXeSSBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UXeSSBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UXeSSBlueprintLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UXeSSBlueprintLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UXeSSBlueprintLibrary, 1685276536);
	template<> XESSBLUEPRINT_API UClass* StaticClass<UXeSSBlueprintLibrary>()
	{
		return UXeSSBlueprintLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UXeSSBlueprintLibrary(Z_Construct_UClass_UXeSSBlueprintLibrary, &UXeSSBlueprintLibrary::StaticClass, TEXT("/Script/XeSSBlueprint"), TEXT("UXeSSBlueprintLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UXeSSBlueprintLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
