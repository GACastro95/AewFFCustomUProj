// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/ColorTableFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeColorTableFunctionLibrary() {}
// Cross Module References
	CREATION_API UClass* Z_Construct_UClass_UColorTableFunctionLibrary_NoRegister();
	CREATION_API UClass* Z_Construct_UClass_UColorTableFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Creation();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FIndexedColorList();
	ELITE_CORE_API UEnum* Z_Construct_UEnum_ELITE_Core_EBasicFindResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FEditColorPack();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FEditColorGroupID();
// End Cross Module References
	DEFINE_FUNCTION(UColorTableFunctionLibrary::execBreakColorIDs1)
	{
		P_GET_STRUCT(FIndexedColorList,Z_Param_InIDs);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Color1);
		P_FINISH;
		P_NATIVE_BEGIN;
		UColorTableFunctionLibrary::BreakColorIDs1(Z_Param_InIDs,Z_Param_Out_Color1);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UColorTableFunctionLibrary::execBreakColorIDs2)
	{
		P_GET_STRUCT(FIndexedColorList,Z_Param_InIDs);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Color1);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Color2);
		P_FINISH;
		P_NATIVE_BEGIN;
		UColorTableFunctionLibrary::BreakColorIDs2(Z_Param_InIDs,Z_Param_Out_Color1,Z_Param_Out_Color2);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UColorTableFunctionLibrary::execBreakColorIDs3)
	{
		P_GET_STRUCT(FIndexedColorList,Z_Param_InIDs);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Color1);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Color2);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Color3);
		P_FINISH;
		P_NATIVE_BEGIN;
		UColorTableFunctionLibrary::BreakColorIDs3(Z_Param_InIDs,Z_Param_Out_Color1,Z_Param_Out_Color2,Z_Param_Out_Color3);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UColorTableFunctionLibrary::execBreakColorIDs4)
	{
		P_GET_STRUCT(FIndexedColorList,Z_Param_InIDs);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Color1);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Color2);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Color3);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Color4);
		P_FINISH;
		P_NATIVE_BEGIN;
		UColorTableFunctionLibrary::BreakColorIDs4(Z_Param_InIDs,Z_Param_Out_Color1,Z_Param_Out_Color2,Z_Param_Out_Color3,Z_Param_Out_Color4);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UColorTableFunctionLibrary::execFindColorID)
	{
		P_GET_ENUM_REF(EBasicFindResult,Z_Param_Out_Result);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutColorID);
		P_GET_STRUCT_REF(FIndexedColorList,Z_Param_Out_InIDs);
		P_GET_PROPERTY(FIntProperty,Z_Param_ColorSlot);
		P_FINISH;
		P_NATIVE_BEGIN;
		UColorTableFunctionLibrary::FindColorID((EBasicFindResult&)(Z_Param_Out_Result),Z_Param_Out_OutColorID,Z_Param_Out_InIDs,Z_Param_ColorSlot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UColorTableFunctionLibrary::execGetIndexedColor)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ColorID);
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_Out);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UColorTableFunctionLibrary::GetIndexedColor(Z_Param_ColorID,Z_Param_Out_Out);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UColorTableFunctionLibrary::execInitColorIDs)
	{
		P_GET_STRUCT(FIndexedColorList,Z_Param_InIDs);
		P_GET_TARRAY(FEditColorPack,Z_Param_ColorPacks);
		P_GET_STRUCT_REF(FIndexedColorList,Z_Param_Out_Out);
		P_FINISH;
		P_NATIVE_BEGIN;
		UColorTableFunctionLibrary::InitColorIDs(Z_Param_InIDs,Z_Param_ColorPacks,Z_Param_Out_Out);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UColorTableFunctionLibrary::execIsEqual)
	{
		P_GET_STRUCT(FIndexedColorList,Z_Param_A);
		P_GET_STRUCT(FIndexedColorList,Z_Param_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UColorTableFunctionLibrary::IsEqual(Z_Param_A,Z_Param_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UColorTableFunctionLibrary::execMakeEditColorPack)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ColorSlotNo);
		P_GET_PROPERTY(FIntProperty,Z_Param_DefaultColorID);
		P_GET_TARRAY(FEditColorGroupID,Z_Param_Groups);
		P_GET_STRUCT_REF(FEditColorPack,Z_Param_Out_Out);
		P_FINISH;
		P_NATIVE_BEGIN;
		UColorTableFunctionLibrary::MakeEditColorPack(Z_Param_ColorSlotNo,Z_Param_DefaultColorID,Z_Param_Groups,Z_Param_Out_Out);
		P_NATIVE_END;
	}
	void UColorTableFunctionLibrary::StaticRegisterNativesUColorTableFunctionLibrary()
	{
		UClass* Class = UColorTableFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BreakColorIDs1", &UColorTableFunctionLibrary::execBreakColorIDs1 },
			{ "BreakColorIDs2", &UColorTableFunctionLibrary::execBreakColorIDs2 },
			{ "BreakColorIDs3", &UColorTableFunctionLibrary::execBreakColorIDs3 },
			{ "BreakColorIDs4", &UColorTableFunctionLibrary::execBreakColorIDs4 },
			{ "FindColorID", &UColorTableFunctionLibrary::execFindColorID },
			{ "GetIndexedColor", &UColorTableFunctionLibrary::execGetIndexedColor },
			{ "InitColorIDs", &UColorTableFunctionLibrary::execInitColorIDs },
			{ "IsEqual", &UColorTableFunctionLibrary::execIsEqual },
			{ "MakeEditColorPack", &UColorTableFunctionLibrary::execMakeEditColorPack },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs1_Statics
	{
		struct ColorTableFunctionLibrary_eventBreakColorIDs1_Parms
		{
			FIndexedColorList InIDs;
			int32 Color1;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InIDs;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Color1;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs1_Statics::NewProp_InIDs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs1_Statics::NewProp_InIDs = { "InIDs", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ColorTableFunctionLibrary_eventBreakColorIDs1_Parms, InIDs), Z_Construct_UScriptStruct_FIndexedColorList, METADATA_PARAMS(Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs1_Statics::NewProp_InIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs1_Statics::NewProp_InIDs_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs1_Statics::NewProp_Color1 = { "Color1", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ColorTableFunctionLibrary_eventBreakColorIDs1_Parms, Color1), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs1_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs1_Statics::NewProp_InIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs1_Statics::NewProp_Color1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs1_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ColorTableFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UColorTableFunctionLibrary, nullptr, "BreakColorIDs1", nullptr, nullptr, sizeof(ColorTableFunctionLibrary_eventBreakColorIDs1_Parms), Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs1_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs1_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs1_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs1_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs1()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs1_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs2_Statics
	{
		struct ColorTableFunctionLibrary_eventBreakColorIDs2_Parms
		{
			FIndexedColorList InIDs;
			int32 Color1;
			int32 Color2;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InIDs;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Color1;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Color2;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs2_Statics::NewProp_InIDs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs2_Statics::NewProp_InIDs = { "InIDs", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ColorTableFunctionLibrary_eventBreakColorIDs2_Parms, InIDs), Z_Construct_UScriptStruct_FIndexedColorList, METADATA_PARAMS(Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs2_Statics::NewProp_InIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs2_Statics::NewProp_InIDs_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs2_Statics::NewProp_Color1 = { "Color1", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ColorTableFunctionLibrary_eventBreakColorIDs2_Parms, Color1), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs2_Statics::NewProp_Color2 = { "Color2", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ColorTableFunctionLibrary_eventBreakColorIDs2_Parms, Color2), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs2_Statics::NewProp_InIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs2_Statics::NewProp_Color1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs2_Statics::NewProp_Color2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs2_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ColorTableFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UColorTableFunctionLibrary, nullptr, "BreakColorIDs2", nullptr, nullptr, sizeof(ColorTableFunctionLibrary_eventBreakColorIDs2_Parms), Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs2_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs2_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs3_Statics
	{
		struct ColorTableFunctionLibrary_eventBreakColorIDs3_Parms
		{
			FIndexedColorList InIDs;
			int32 Color1;
			int32 Color2;
			int32 Color3;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InIDs;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Color1;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Color2;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Color3;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs3_Statics::NewProp_InIDs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs3_Statics::NewProp_InIDs = { "InIDs", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ColorTableFunctionLibrary_eventBreakColorIDs3_Parms, InIDs), Z_Construct_UScriptStruct_FIndexedColorList, METADATA_PARAMS(Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs3_Statics::NewProp_InIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs3_Statics::NewProp_InIDs_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs3_Statics::NewProp_Color1 = { "Color1", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ColorTableFunctionLibrary_eventBreakColorIDs3_Parms, Color1), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs3_Statics::NewProp_Color2 = { "Color2", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ColorTableFunctionLibrary_eventBreakColorIDs3_Parms, Color2), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs3_Statics::NewProp_Color3 = { "Color3", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ColorTableFunctionLibrary_eventBreakColorIDs3_Parms, Color3), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs3_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs3_Statics::NewProp_InIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs3_Statics::NewProp_Color1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs3_Statics::NewProp_Color2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs3_Statics::NewProp_Color3,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs3_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ColorTableFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs3_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UColorTableFunctionLibrary, nullptr, "BreakColorIDs3", nullptr, nullptr, sizeof(ColorTableFunctionLibrary_eventBreakColorIDs3_Parms), Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs3_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs3_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs3_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs3_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs3()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs3_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs4_Statics
	{
		struct ColorTableFunctionLibrary_eventBreakColorIDs4_Parms
		{
			FIndexedColorList InIDs;
			int32 Color1;
			int32 Color2;
			int32 Color3;
			int32 Color4;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InIDs;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Color1;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Color2;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Color3;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Color4;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs4_Statics::NewProp_InIDs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs4_Statics::NewProp_InIDs = { "InIDs", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ColorTableFunctionLibrary_eventBreakColorIDs4_Parms, InIDs), Z_Construct_UScriptStruct_FIndexedColorList, METADATA_PARAMS(Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs4_Statics::NewProp_InIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs4_Statics::NewProp_InIDs_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs4_Statics::NewProp_Color1 = { "Color1", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ColorTableFunctionLibrary_eventBreakColorIDs4_Parms, Color1), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs4_Statics::NewProp_Color2 = { "Color2", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ColorTableFunctionLibrary_eventBreakColorIDs4_Parms, Color2), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs4_Statics::NewProp_Color3 = { "Color3", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ColorTableFunctionLibrary_eventBreakColorIDs4_Parms, Color3), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs4_Statics::NewProp_Color4 = { "Color4", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ColorTableFunctionLibrary_eventBreakColorIDs4_Parms, Color4), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs4_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs4_Statics::NewProp_InIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs4_Statics::NewProp_Color1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs4_Statics::NewProp_Color2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs4_Statics::NewProp_Color3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs4_Statics::NewProp_Color4,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs4_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ColorTableFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs4_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UColorTableFunctionLibrary, nullptr, "BreakColorIDs4", nullptr, nullptr, sizeof(ColorTableFunctionLibrary_eventBreakColorIDs4_Parms), Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs4_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs4_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs4_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs4_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs4()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs4_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UColorTableFunctionLibrary_FindColorID_Statics
	{
		struct ColorTableFunctionLibrary_eventFindColorID_Parms
		{
			EBasicFindResult Result;
			int32 OutColorID;
			FIndexedColorList InIDs;
			int32 ColorSlot;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutColorID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InIDs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ColorSlot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UColorTableFunctionLibrary_FindColorID_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UColorTableFunctionLibrary_FindColorID_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ColorTableFunctionLibrary_eventFindColorID_Parms, Result), Z_Construct_UEnum_ELITE_Core_EBasicFindResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UColorTableFunctionLibrary_FindColorID_Statics::NewProp_OutColorID = { "OutColorID", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ColorTableFunctionLibrary_eventFindColorID_Parms, OutColorID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UColorTableFunctionLibrary_FindColorID_Statics::NewProp_InIDs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UColorTableFunctionLibrary_FindColorID_Statics::NewProp_InIDs = { "InIDs", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ColorTableFunctionLibrary_eventFindColorID_Parms, InIDs), Z_Construct_UScriptStruct_FIndexedColorList, METADATA_PARAMS(Z_Construct_UFunction_UColorTableFunctionLibrary_FindColorID_Statics::NewProp_InIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UColorTableFunctionLibrary_FindColorID_Statics::NewProp_InIDs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UColorTableFunctionLibrary_FindColorID_Statics::NewProp_ColorSlot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UColorTableFunctionLibrary_FindColorID_Statics::NewProp_ColorSlot = { "ColorSlot", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ColorTableFunctionLibrary_eventFindColorID_Parms, ColorSlot), METADATA_PARAMS(Z_Construct_UFunction_UColorTableFunctionLibrary_FindColorID_Statics::NewProp_ColorSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UColorTableFunctionLibrary_FindColorID_Statics::NewProp_ColorSlot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UColorTableFunctionLibrary_FindColorID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorTableFunctionLibrary_FindColorID_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorTableFunctionLibrary_FindColorID_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorTableFunctionLibrary_FindColorID_Statics::NewProp_OutColorID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorTableFunctionLibrary_FindColorID_Statics::NewProp_InIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorTableFunctionLibrary_FindColorID_Statics::NewProp_ColorSlot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UColorTableFunctionLibrary_FindColorID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ColorTableFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UColorTableFunctionLibrary_FindColorID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UColorTableFunctionLibrary, nullptr, "FindColorID", nullptr, nullptr, sizeof(ColorTableFunctionLibrary_eventFindColorID_Parms), Z_Construct_UFunction_UColorTableFunctionLibrary_FindColorID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UColorTableFunctionLibrary_FindColorID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UColorTableFunctionLibrary_FindColorID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UColorTableFunctionLibrary_FindColorID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UColorTableFunctionLibrary_FindColorID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UColorTableFunctionLibrary_FindColorID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UColorTableFunctionLibrary_GetIndexedColor_Statics
	{
		struct ColorTableFunctionLibrary_eventGetIndexedColor_Parms
		{
			int32 ColorID;
			FLinearColor Out;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ColorID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Out;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UColorTableFunctionLibrary_GetIndexedColor_Statics::NewProp_ColorID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UColorTableFunctionLibrary_GetIndexedColor_Statics::NewProp_ColorID = { "ColorID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ColorTableFunctionLibrary_eventGetIndexedColor_Parms, ColorID), METADATA_PARAMS(Z_Construct_UFunction_UColorTableFunctionLibrary_GetIndexedColor_Statics::NewProp_ColorID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UColorTableFunctionLibrary_GetIndexedColor_Statics::NewProp_ColorID_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UColorTableFunctionLibrary_GetIndexedColor_Statics::NewProp_Out = { "Out", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ColorTableFunctionLibrary_eventGetIndexedColor_Parms, Out), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UColorTableFunctionLibrary_GetIndexedColor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ColorTableFunctionLibrary_eventGetIndexedColor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UColorTableFunctionLibrary_GetIndexedColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ColorTableFunctionLibrary_eventGetIndexedColor_Parms), &Z_Construct_UFunction_UColorTableFunctionLibrary_GetIndexedColor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UColorTableFunctionLibrary_GetIndexedColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorTableFunctionLibrary_GetIndexedColor_Statics::NewProp_ColorID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorTableFunctionLibrary_GetIndexedColor_Statics::NewProp_Out,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorTableFunctionLibrary_GetIndexedColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UColorTableFunctionLibrary_GetIndexedColor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ColorTableFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UColorTableFunctionLibrary_GetIndexedColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UColorTableFunctionLibrary, nullptr, "GetIndexedColor", nullptr, nullptr, sizeof(ColorTableFunctionLibrary_eventGetIndexedColor_Parms), Z_Construct_UFunction_UColorTableFunctionLibrary_GetIndexedColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UColorTableFunctionLibrary_GetIndexedColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UColorTableFunctionLibrary_GetIndexedColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UColorTableFunctionLibrary_GetIndexedColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UColorTableFunctionLibrary_GetIndexedColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UColorTableFunctionLibrary_GetIndexedColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UColorTableFunctionLibrary_InitColorIDs_Statics
	{
		struct ColorTableFunctionLibrary_eventInitColorIDs_Parms
		{
			FIndexedColorList InIDs;
			TArray<FEditColorPack> ColorPacks;
			FIndexedColorList Out;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorPacks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorPacks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ColorPacks;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Out;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UColorTableFunctionLibrary_InitColorIDs_Statics::NewProp_InIDs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UColorTableFunctionLibrary_InitColorIDs_Statics::NewProp_InIDs = { "InIDs", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ColorTableFunctionLibrary_eventInitColorIDs_Parms, InIDs), Z_Construct_UScriptStruct_FIndexedColorList, METADATA_PARAMS(Z_Construct_UFunction_UColorTableFunctionLibrary_InitColorIDs_Statics::NewProp_InIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UColorTableFunctionLibrary_InitColorIDs_Statics::NewProp_InIDs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UColorTableFunctionLibrary_InitColorIDs_Statics::NewProp_ColorPacks_Inner = { "ColorPacks", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEditColorPack, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UColorTableFunctionLibrary_InitColorIDs_Statics::NewProp_ColorPacks_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UColorTableFunctionLibrary_InitColorIDs_Statics::NewProp_ColorPacks = { "ColorPacks", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ColorTableFunctionLibrary_eventInitColorIDs_Parms, ColorPacks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UColorTableFunctionLibrary_InitColorIDs_Statics::NewProp_ColorPacks_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UColorTableFunctionLibrary_InitColorIDs_Statics::NewProp_ColorPacks_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UColorTableFunctionLibrary_InitColorIDs_Statics::NewProp_Out = { "Out", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ColorTableFunctionLibrary_eventInitColorIDs_Parms, Out), Z_Construct_UScriptStruct_FIndexedColorList, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UColorTableFunctionLibrary_InitColorIDs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorTableFunctionLibrary_InitColorIDs_Statics::NewProp_InIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorTableFunctionLibrary_InitColorIDs_Statics::NewProp_ColorPacks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorTableFunctionLibrary_InitColorIDs_Statics::NewProp_ColorPacks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorTableFunctionLibrary_InitColorIDs_Statics::NewProp_Out,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UColorTableFunctionLibrary_InitColorIDs_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ColorTableFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UColorTableFunctionLibrary_InitColorIDs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UColorTableFunctionLibrary, nullptr, "InitColorIDs", nullptr, nullptr, sizeof(ColorTableFunctionLibrary_eventInitColorIDs_Parms), Z_Construct_UFunction_UColorTableFunctionLibrary_InitColorIDs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UColorTableFunctionLibrary_InitColorIDs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UColorTableFunctionLibrary_InitColorIDs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UColorTableFunctionLibrary_InitColorIDs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UColorTableFunctionLibrary_InitColorIDs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UColorTableFunctionLibrary_InitColorIDs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UColorTableFunctionLibrary_IsEqual_Statics
	{
		struct ColorTableFunctionLibrary_eventIsEqual_Parms
		{
			FIndexedColorList A;
			FIndexedColorList B;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_A;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_B;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UColorTableFunctionLibrary_IsEqual_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UColorTableFunctionLibrary_IsEqual_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ColorTableFunctionLibrary_eventIsEqual_Parms, A), Z_Construct_UScriptStruct_FIndexedColorList, METADATA_PARAMS(Z_Construct_UFunction_UColorTableFunctionLibrary_IsEqual_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UColorTableFunctionLibrary_IsEqual_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UColorTableFunctionLibrary_IsEqual_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UColorTableFunctionLibrary_IsEqual_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ColorTableFunctionLibrary_eventIsEqual_Parms, B), Z_Construct_UScriptStruct_FIndexedColorList, METADATA_PARAMS(Z_Construct_UFunction_UColorTableFunctionLibrary_IsEqual_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UColorTableFunctionLibrary_IsEqual_Statics::NewProp_B_MetaData)) };
	void Z_Construct_UFunction_UColorTableFunctionLibrary_IsEqual_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ColorTableFunctionLibrary_eventIsEqual_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UColorTableFunctionLibrary_IsEqual_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ColorTableFunctionLibrary_eventIsEqual_Parms), &Z_Construct_UFunction_UColorTableFunctionLibrary_IsEqual_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UColorTableFunctionLibrary_IsEqual_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorTableFunctionLibrary_IsEqual_Statics::NewProp_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorTableFunctionLibrary_IsEqual_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorTableFunctionLibrary_IsEqual_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UColorTableFunctionLibrary_IsEqual_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ColorTableFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UColorTableFunctionLibrary_IsEqual_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UColorTableFunctionLibrary, nullptr, "IsEqual", nullptr, nullptr, sizeof(ColorTableFunctionLibrary_eventIsEqual_Parms), Z_Construct_UFunction_UColorTableFunctionLibrary_IsEqual_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UColorTableFunctionLibrary_IsEqual_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UColorTableFunctionLibrary_IsEqual_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UColorTableFunctionLibrary_IsEqual_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UColorTableFunctionLibrary_IsEqual()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UColorTableFunctionLibrary_IsEqual_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UColorTableFunctionLibrary_MakeEditColorPack_Statics
	{
		struct ColorTableFunctionLibrary_eventMakeEditColorPack_Parms
		{
			int32 ColorSlotNo;
			int32 DefaultColorID;
			TArray<FEditColorGroupID> Groups;
			FEditColorPack Out;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorSlotNo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ColorSlotNo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultColorID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DefaultColorID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Groups_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Groups_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Groups;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Out;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UColorTableFunctionLibrary_MakeEditColorPack_Statics::NewProp_ColorSlotNo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UColorTableFunctionLibrary_MakeEditColorPack_Statics::NewProp_ColorSlotNo = { "ColorSlotNo", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ColorTableFunctionLibrary_eventMakeEditColorPack_Parms, ColorSlotNo), METADATA_PARAMS(Z_Construct_UFunction_UColorTableFunctionLibrary_MakeEditColorPack_Statics::NewProp_ColorSlotNo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UColorTableFunctionLibrary_MakeEditColorPack_Statics::NewProp_ColorSlotNo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UColorTableFunctionLibrary_MakeEditColorPack_Statics::NewProp_DefaultColorID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UColorTableFunctionLibrary_MakeEditColorPack_Statics::NewProp_DefaultColorID = { "DefaultColorID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ColorTableFunctionLibrary_eventMakeEditColorPack_Parms, DefaultColorID), METADATA_PARAMS(Z_Construct_UFunction_UColorTableFunctionLibrary_MakeEditColorPack_Statics::NewProp_DefaultColorID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UColorTableFunctionLibrary_MakeEditColorPack_Statics::NewProp_DefaultColorID_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UColorTableFunctionLibrary_MakeEditColorPack_Statics::NewProp_Groups_Inner = { "Groups", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEditColorGroupID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UColorTableFunctionLibrary_MakeEditColorPack_Statics::NewProp_Groups_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UColorTableFunctionLibrary_MakeEditColorPack_Statics::NewProp_Groups = { "Groups", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ColorTableFunctionLibrary_eventMakeEditColorPack_Parms, Groups), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UColorTableFunctionLibrary_MakeEditColorPack_Statics::NewProp_Groups_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UColorTableFunctionLibrary_MakeEditColorPack_Statics::NewProp_Groups_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UColorTableFunctionLibrary_MakeEditColorPack_Statics::NewProp_Out = { "Out", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ColorTableFunctionLibrary_eventMakeEditColorPack_Parms, Out), Z_Construct_UScriptStruct_FEditColorPack, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UColorTableFunctionLibrary_MakeEditColorPack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorTableFunctionLibrary_MakeEditColorPack_Statics::NewProp_ColorSlotNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorTableFunctionLibrary_MakeEditColorPack_Statics::NewProp_DefaultColorID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorTableFunctionLibrary_MakeEditColorPack_Statics::NewProp_Groups_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorTableFunctionLibrary_MakeEditColorPack_Statics::NewProp_Groups,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorTableFunctionLibrary_MakeEditColorPack_Statics::NewProp_Out,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UColorTableFunctionLibrary_MakeEditColorPack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ColorTableFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UColorTableFunctionLibrary_MakeEditColorPack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UColorTableFunctionLibrary, nullptr, "MakeEditColorPack", nullptr, nullptr, sizeof(ColorTableFunctionLibrary_eventMakeEditColorPack_Parms), Z_Construct_UFunction_UColorTableFunctionLibrary_MakeEditColorPack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UColorTableFunctionLibrary_MakeEditColorPack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UColorTableFunctionLibrary_MakeEditColorPack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UColorTableFunctionLibrary_MakeEditColorPack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UColorTableFunctionLibrary_MakeEditColorPack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UColorTableFunctionLibrary_MakeEditColorPack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UColorTableFunctionLibrary_NoRegister()
	{
		return UColorTableFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UColorTableFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UColorTableFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UColorTableFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs1, "BreakColorIDs1" }, // 898728279
		{ &Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs2, "BreakColorIDs2" }, // 1304995795
		{ &Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs3, "BreakColorIDs3" }, // 1926661345
		{ &Z_Construct_UFunction_UColorTableFunctionLibrary_BreakColorIDs4, "BreakColorIDs4" }, // 3556479161
		{ &Z_Construct_UFunction_UColorTableFunctionLibrary_FindColorID, "FindColorID" }, // 2066315931
		{ &Z_Construct_UFunction_UColorTableFunctionLibrary_GetIndexedColor, "GetIndexedColor" }, // 2210825328
		{ &Z_Construct_UFunction_UColorTableFunctionLibrary_InitColorIDs, "InitColorIDs" }, // 4009621003
		{ &Z_Construct_UFunction_UColorTableFunctionLibrary_IsEqual, "IsEqual" }, // 785554356
		{ &Z_Construct_UFunction_UColorTableFunctionLibrary_MakeEditColorPack, "MakeEditColorPack" }, // 526673934
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UColorTableFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ColorTableFunctionLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ColorTableFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UColorTableFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UColorTableFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UColorTableFunctionLibrary_Statics::ClassParams = {
		&UColorTableFunctionLibrary::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UColorTableFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UColorTableFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UColorTableFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UColorTableFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UColorTableFunctionLibrary, 1363187614);
	template<> CREATION_API UClass* StaticClass<UColorTableFunctionLibrary>()
	{
		return UColorTableFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UColorTableFunctionLibrary(Z_Construct_UClass_UColorTableFunctionLibrary, &UColorTableFunctionLibrary::StaticClass, TEXT("/Script/Creation"), TEXT("UColorTableFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UColorTableFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
