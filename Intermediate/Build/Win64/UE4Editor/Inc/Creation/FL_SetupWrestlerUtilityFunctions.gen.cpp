// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/FL_SetupWrestlerUtilityFunctions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFL_SetupWrestlerUtilityFunctions() {}
// Cross Module References
	CREATION_API UClass* Z_Construct_UClass_UFL_SetupWrestlerUtilityFunctions_NoRegister();
	CREATION_API UClass* Z_Construct_UClass_UFL_SetupWrestlerUtilityFunctions();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Creation();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FWrestlerSetupParam();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELWrestlerProfile_CutScene();
	ELITE_CORE_API UEnum* Z_Construct_UEnum_ELITE_Core_EGender();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FWrestlerMoves();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FWrestlingSkillParam();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
// End Cross Module References
	DEFINE_FUNCTION(UFL_SetupWrestlerUtilityFunctions::execGetEntranceParam)
	{
		P_GET_STRUCT_REF(FWrestlerSetupParam,Z_Param_Out_SetupWrestler);
		P_GET_STRUCT_REF(FELWrestlerProfile_CutScene,Z_Param_Out_Out);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFL_SetupWrestlerUtilityFunctions::GetEntranceParam(Z_Param_Out_SetupWrestler,Z_Param_Out_Out);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFL_SetupWrestlerUtilityFunctions::execGetFightStyle)
	{
		P_GET_STRUCT_REF(FWrestlerSetupParam,Z_Param_Out_SetupWrestler);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UFL_SetupWrestlerUtilityFunctions::GetFightStyle(Z_Param_Out_SetupWrestler);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFL_SetupWrestlerUtilityFunctions::execGetGender)
	{
		P_GET_STRUCT_REF(FWrestlerSetupParam,Z_Param_Out_SetupWrestler);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EGender*)Z_Param__Result=UFL_SetupWrestlerUtilityFunctions::GetGender(Z_Param_Out_SetupWrestler);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFL_SetupWrestlerUtilityFunctions::execGetMovesParam)
	{
		P_GET_STRUCT_REF(FWrestlerSetupParam,Z_Param_Out_SetupWrestler);
		P_GET_STRUCT_REF(FWrestlerMoves,Z_Param_Out_Out);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFL_SetupWrestlerUtilityFunctions::GetMovesParam(Z_Param_Out_SetupWrestler,Z_Param_Out_Out);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFL_SetupWrestlerUtilityFunctions::execGetMultiLineWrestlerNameText)
	{
		P_GET_STRUCT_REF(FWrestlerSetupParam,Z_Param_Out_SetupWrestler);
		P_GET_UBOOL(Z_Param_bUpper);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Out);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFL_SetupWrestlerUtilityFunctions::GetMultiLineWrestlerNameText(Z_Param_Out_SetupWrestler,Z_Param_bUpper,Z_Param_Out_Out);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFL_SetupWrestlerUtilityFunctions::execGetNickNameText)
	{
		P_GET_STRUCT_REF(FWrestlerSetupParam,Z_Param_Out_SetupWrestler);
		P_GET_UBOOL(Z_Param_bUpper);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Out);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFL_SetupWrestlerUtilityFunctions::GetNickNameText(Z_Param_Out_SetupWrestler,Z_Param_bUpper,Z_Param_Out_Out);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFL_SetupWrestlerUtilityFunctions::execGetShortNameText)
	{
		P_GET_STRUCT_REF(FWrestlerSetupParam,Z_Param_Out_SetupWrestler);
		P_GET_UBOOL(Z_Param_bUpper);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Out);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFL_SetupWrestlerUtilityFunctions::GetShortNameText(Z_Param_Out_SetupWrestler,Z_Param_bUpper,Z_Param_Out_Out);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFL_SetupWrestlerUtilityFunctions::execGetSkillParam)
	{
		P_GET_STRUCT_REF(FWrestlerSetupParam,Z_Param_Out_SetupWrestler);
		P_GET_STRUCT_REF(FWrestlingSkillParam,Z_Param_Out_Out);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFL_SetupWrestlerUtilityFunctions::GetSkillParam(Z_Param_Out_SetupWrestler,Z_Param_Out_Out);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFL_SetupWrestlerUtilityFunctions::execGetSnsNameText)
	{
		P_GET_STRUCT_REF(FWrestlerSetupParam,Z_Param_Out_SetupWrestler);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Out);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFL_SetupWrestlerUtilityFunctions::GetSnsNameText(Z_Param_Out_SetupWrestler,Z_Param_Out_Out);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFL_SetupWrestlerUtilityFunctions::execGetSpokenNameText)
	{
		P_GET_STRUCT_REF(FWrestlerSetupParam,Z_Param_Out_SetupWrestler);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Out);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFL_SetupWrestlerUtilityFunctions::GetSpokenNameText(Z_Param_Out_SetupWrestler,Z_Param_Out_Out);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFL_SetupWrestlerUtilityFunctions::execGetUID)
	{
		P_GET_STRUCT_REF(FWrestlerSetupParam,Z_Param_Out_SetupWrestler);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGuid*)Z_Param__Result=UFL_SetupWrestlerUtilityFunctions::GetUID(Z_Param_Out_SetupWrestler);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFL_SetupWrestlerUtilityFunctions::execGetWrestlerID)
	{
		P_GET_STRUCT_REF(FWrestlerSetupParam,Z_Param_Out_SetupWrestler);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EWrestlerID_N*)Z_Param__Result=UFL_SetupWrestlerUtilityFunctions::GetWrestlerID(Z_Param_Out_SetupWrestler);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFL_SetupWrestlerUtilityFunctions::execGetWrestlerNameText)
	{
		P_GET_STRUCT_REF(FWrestlerSetupParam,Z_Param_Out_SetupWrestler);
		P_GET_UBOOL(Z_Param_bUpper);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Out);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFL_SetupWrestlerUtilityFunctions::GetWrestlerNameText(Z_Param_Out_SetupWrestler,Z_Param_bUpper,Z_Param_Out_Out);
		P_NATIVE_END;
	}
	void UFL_SetupWrestlerUtilityFunctions::StaticRegisterNativesUFL_SetupWrestlerUtilityFunctions()
	{
		UClass* Class = UFL_SetupWrestlerUtilityFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEntranceParam", &UFL_SetupWrestlerUtilityFunctions::execGetEntranceParam },
			{ "GetFightStyle", &UFL_SetupWrestlerUtilityFunctions::execGetFightStyle },
			{ "GetGender", &UFL_SetupWrestlerUtilityFunctions::execGetGender },
			{ "GetMovesParam", &UFL_SetupWrestlerUtilityFunctions::execGetMovesParam },
			{ "GetMultiLineWrestlerNameText", &UFL_SetupWrestlerUtilityFunctions::execGetMultiLineWrestlerNameText },
			{ "GetNickNameText", &UFL_SetupWrestlerUtilityFunctions::execGetNickNameText },
			{ "GetShortNameText", &UFL_SetupWrestlerUtilityFunctions::execGetShortNameText },
			{ "GetSkillParam", &UFL_SetupWrestlerUtilityFunctions::execGetSkillParam },
			{ "GetSnsNameText", &UFL_SetupWrestlerUtilityFunctions::execGetSnsNameText },
			{ "GetSpokenNameText", &UFL_SetupWrestlerUtilityFunctions::execGetSpokenNameText },
			{ "GetUID", &UFL_SetupWrestlerUtilityFunctions::execGetUID },
			{ "GetWrestlerID", &UFL_SetupWrestlerUtilityFunctions::execGetWrestlerID },
			{ "GetWrestlerNameText", &UFL_SetupWrestlerUtilityFunctions::execGetWrestlerNameText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetEntranceParam_Statics
	{
		struct FL_SetupWrestlerUtilityFunctions_eventGetEntranceParam_Parms
		{
			FWrestlerSetupParam SetupWrestler;
			FELWrestlerProfile_CutScene Out;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SetupWrestler_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SetupWrestler;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Out;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetEntranceParam_Statics::NewProp_SetupWrestler_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetEntranceParam_Statics::NewProp_SetupWrestler = { "SetupWrestler", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_SetupWrestlerUtilityFunctions_eventGetEntranceParam_Parms, SetupWrestler), Z_Construct_UScriptStruct_FWrestlerSetupParam, METADATA_PARAMS(Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetEntranceParam_Statics::NewProp_SetupWrestler_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetEntranceParam_Statics::NewProp_SetupWrestler_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetEntranceParam_Statics::NewProp_Out = { "Out", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_SetupWrestlerUtilityFunctions_eventGetEntranceParam_Parms, Out), Z_Construct_UScriptStruct_FELWrestlerProfile_CutScene, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetEntranceParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetEntranceParam_Statics::NewProp_SetupWrestler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetEntranceParam_Statics::NewProp_Out,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetEntranceParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FL_SetupWrestlerUtilityFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetEntranceParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFL_SetupWrestlerUtilityFunctions, nullptr, "GetEntranceParam", nullptr, nullptr, sizeof(FL_SetupWrestlerUtilityFunctions_eventGetEntranceParam_Parms), Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetEntranceParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetEntranceParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetEntranceParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetEntranceParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetEntranceParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetEntranceParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetFightStyle_Statics
	{
		struct FL_SetupWrestlerUtilityFunctions_eventGetFightStyle_Parms
		{
			FWrestlerSetupParam SetupWrestler;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SetupWrestler_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SetupWrestler;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetFightStyle_Statics::NewProp_SetupWrestler_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetFightStyle_Statics::NewProp_SetupWrestler = { "SetupWrestler", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_SetupWrestlerUtilityFunctions_eventGetFightStyle_Parms, SetupWrestler), Z_Construct_UScriptStruct_FWrestlerSetupParam, METADATA_PARAMS(Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetFightStyle_Statics::NewProp_SetupWrestler_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetFightStyle_Statics::NewProp_SetupWrestler_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetFightStyle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_SetupWrestlerUtilityFunctions_eventGetFightStyle_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetFightStyle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetFightStyle_Statics::NewProp_SetupWrestler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetFightStyle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetFightStyle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FL_SetupWrestlerUtilityFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetFightStyle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFL_SetupWrestlerUtilityFunctions, nullptr, "GetFightStyle", nullptr, nullptr, sizeof(FL_SetupWrestlerUtilityFunctions_eventGetFightStyle_Parms), Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetFightStyle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetFightStyle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetFightStyle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetFightStyle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetFightStyle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetFightStyle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetGender_Statics
	{
		struct FL_SetupWrestlerUtilityFunctions_eventGetGender_Parms
		{
			FWrestlerSetupParam SetupWrestler;
			EGender ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SetupWrestler_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SetupWrestler;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetGender_Statics::NewProp_SetupWrestler_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetGender_Statics::NewProp_SetupWrestler = { "SetupWrestler", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_SetupWrestlerUtilityFunctions_eventGetGender_Parms, SetupWrestler), Z_Construct_UScriptStruct_FWrestlerSetupParam, METADATA_PARAMS(Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetGender_Statics::NewProp_SetupWrestler_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetGender_Statics::NewProp_SetupWrestler_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetGender_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetGender_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_SetupWrestlerUtilityFunctions_eventGetGender_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Core_EGender, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetGender_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetGender_Statics::NewProp_SetupWrestler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetGender_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetGender_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetGender_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FL_SetupWrestlerUtilityFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetGender_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFL_SetupWrestlerUtilityFunctions, nullptr, "GetGender", nullptr, nullptr, sizeof(FL_SetupWrestlerUtilityFunctions_eventGetGender_Parms), Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetGender_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetGender_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetGender_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetGender_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetGender()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetGender_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetMovesParam_Statics
	{
		struct FL_SetupWrestlerUtilityFunctions_eventGetMovesParam_Parms
		{
			FWrestlerSetupParam SetupWrestler;
			FWrestlerMoves Out;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SetupWrestler_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SetupWrestler;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Out;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetMovesParam_Statics::NewProp_SetupWrestler_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetMovesParam_Statics::NewProp_SetupWrestler = { "SetupWrestler", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_SetupWrestlerUtilityFunctions_eventGetMovesParam_Parms, SetupWrestler), Z_Construct_UScriptStruct_FWrestlerSetupParam, METADATA_PARAMS(Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetMovesParam_Statics::NewProp_SetupWrestler_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetMovesParam_Statics::NewProp_SetupWrestler_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetMovesParam_Statics::NewProp_Out = { "Out", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_SetupWrestlerUtilityFunctions_eventGetMovesParam_Parms, Out), Z_Construct_UScriptStruct_FWrestlerMoves, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetMovesParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetMovesParam_Statics::NewProp_SetupWrestler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetMovesParam_Statics::NewProp_Out,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetMovesParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FL_SetupWrestlerUtilityFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetMovesParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFL_SetupWrestlerUtilityFunctions, nullptr, "GetMovesParam", nullptr, nullptr, sizeof(FL_SetupWrestlerUtilityFunctions_eventGetMovesParam_Parms), Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetMovesParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetMovesParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetMovesParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetMovesParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetMovesParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetMovesParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetMultiLineWrestlerNameText_Statics
	{
		struct FL_SetupWrestlerUtilityFunctions_eventGetMultiLineWrestlerNameText_Parms
		{
			FWrestlerSetupParam SetupWrestler;
			bool bUpper;
			FText Out;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SetupWrestler_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SetupWrestler;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUpper_MetaData[];
#endif
		static void NewProp_bUpper_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpper;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Out;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetMultiLineWrestlerNameText_Statics::NewProp_SetupWrestler_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetMultiLineWrestlerNameText_Statics::NewProp_SetupWrestler = { "SetupWrestler", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_SetupWrestlerUtilityFunctions_eventGetMultiLineWrestlerNameText_Parms, SetupWrestler), Z_Construct_UScriptStruct_FWrestlerSetupParam, METADATA_PARAMS(Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetMultiLineWrestlerNameText_Statics::NewProp_SetupWrestler_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetMultiLineWrestlerNameText_Statics::NewProp_SetupWrestler_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetMultiLineWrestlerNameText_Statics::NewProp_bUpper_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetMultiLineWrestlerNameText_Statics::NewProp_bUpper_SetBit(void* Obj)
	{
		((FL_SetupWrestlerUtilityFunctions_eventGetMultiLineWrestlerNameText_Parms*)Obj)->bUpper = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetMultiLineWrestlerNameText_Statics::NewProp_bUpper = { "bUpper", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FL_SetupWrestlerUtilityFunctions_eventGetMultiLineWrestlerNameText_Parms), &Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetMultiLineWrestlerNameText_Statics::NewProp_bUpper_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetMultiLineWrestlerNameText_Statics::NewProp_bUpper_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetMultiLineWrestlerNameText_Statics::NewProp_bUpper_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetMultiLineWrestlerNameText_Statics::NewProp_Out = { "Out", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_SetupWrestlerUtilityFunctions_eventGetMultiLineWrestlerNameText_Parms, Out), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetMultiLineWrestlerNameText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetMultiLineWrestlerNameText_Statics::NewProp_SetupWrestler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetMultiLineWrestlerNameText_Statics::NewProp_bUpper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetMultiLineWrestlerNameText_Statics::NewProp_Out,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetMultiLineWrestlerNameText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FL_SetupWrestlerUtilityFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetMultiLineWrestlerNameText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFL_SetupWrestlerUtilityFunctions, nullptr, "GetMultiLineWrestlerNameText", nullptr, nullptr, sizeof(FL_SetupWrestlerUtilityFunctions_eventGetMultiLineWrestlerNameText_Parms), Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetMultiLineWrestlerNameText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetMultiLineWrestlerNameText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetMultiLineWrestlerNameText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetMultiLineWrestlerNameText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetMultiLineWrestlerNameText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetMultiLineWrestlerNameText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetNickNameText_Statics
	{
		struct FL_SetupWrestlerUtilityFunctions_eventGetNickNameText_Parms
		{
			FWrestlerSetupParam SetupWrestler;
			bool bUpper;
			FText Out;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SetupWrestler_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SetupWrestler;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUpper_MetaData[];
#endif
		static void NewProp_bUpper_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpper;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Out;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetNickNameText_Statics::NewProp_SetupWrestler_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetNickNameText_Statics::NewProp_SetupWrestler = { "SetupWrestler", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_SetupWrestlerUtilityFunctions_eventGetNickNameText_Parms, SetupWrestler), Z_Construct_UScriptStruct_FWrestlerSetupParam, METADATA_PARAMS(Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetNickNameText_Statics::NewProp_SetupWrestler_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetNickNameText_Statics::NewProp_SetupWrestler_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetNickNameText_Statics::NewProp_bUpper_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetNickNameText_Statics::NewProp_bUpper_SetBit(void* Obj)
	{
		((FL_SetupWrestlerUtilityFunctions_eventGetNickNameText_Parms*)Obj)->bUpper = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetNickNameText_Statics::NewProp_bUpper = { "bUpper", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FL_SetupWrestlerUtilityFunctions_eventGetNickNameText_Parms), &Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetNickNameText_Statics::NewProp_bUpper_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetNickNameText_Statics::NewProp_bUpper_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetNickNameText_Statics::NewProp_bUpper_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetNickNameText_Statics::NewProp_Out = { "Out", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_SetupWrestlerUtilityFunctions_eventGetNickNameText_Parms, Out), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetNickNameText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetNickNameText_Statics::NewProp_SetupWrestler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetNickNameText_Statics::NewProp_bUpper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetNickNameText_Statics::NewProp_Out,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetNickNameText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FL_SetupWrestlerUtilityFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetNickNameText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFL_SetupWrestlerUtilityFunctions, nullptr, "GetNickNameText", nullptr, nullptr, sizeof(FL_SetupWrestlerUtilityFunctions_eventGetNickNameText_Parms), Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetNickNameText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetNickNameText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetNickNameText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetNickNameText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetNickNameText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetNickNameText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetShortNameText_Statics
	{
		struct FL_SetupWrestlerUtilityFunctions_eventGetShortNameText_Parms
		{
			FWrestlerSetupParam SetupWrestler;
			bool bUpper;
			FText Out;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SetupWrestler_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SetupWrestler;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUpper_MetaData[];
#endif
		static void NewProp_bUpper_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpper;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Out;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetShortNameText_Statics::NewProp_SetupWrestler_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetShortNameText_Statics::NewProp_SetupWrestler = { "SetupWrestler", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_SetupWrestlerUtilityFunctions_eventGetShortNameText_Parms, SetupWrestler), Z_Construct_UScriptStruct_FWrestlerSetupParam, METADATA_PARAMS(Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetShortNameText_Statics::NewProp_SetupWrestler_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetShortNameText_Statics::NewProp_SetupWrestler_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetShortNameText_Statics::NewProp_bUpper_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetShortNameText_Statics::NewProp_bUpper_SetBit(void* Obj)
	{
		((FL_SetupWrestlerUtilityFunctions_eventGetShortNameText_Parms*)Obj)->bUpper = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetShortNameText_Statics::NewProp_bUpper = { "bUpper", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FL_SetupWrestlerUtilityFunctions_eventGetShortNameText_Parms), &Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetShortNameText_Statics::NewProp_bUpper_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetShortNameText_Statics::NewProp_bUpper_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetShortNameText_Statics::NewProp_bUpper_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetShortNameText_Statics::NewProp_Out = { "Out", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_SetupWrestlerUtilityFunctions_eventGetShortNameText_Parms, Out), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetShortNameText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetShortNameText_Statics::NewProp_SetupWrestler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetShortNameText_Statics::NewProp_bUpper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetShortNameText_Statics::NewProp_Out,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetShortNameText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FL_SetupWrestlerUtilityFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetShortNameText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFL_SetupWrestlerUtilityFunctions, nullptr, "GetShortNameText", nullptr, nullptr, sizeof(FL_SetupWrestlerUtilityFunctions_eventGetShortNameText_Parms), Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetShortNameText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetShortNameText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetShortNameText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetShortNameText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetShortNameText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetShortNameText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetSkillParam_Statics
	{
		struct FL_SetupWrestlerUtilityFunctions_eventGetSkillParam_Parms
		{
			FWrestlerSetupParam SetupWrestler;
			FWrestlingSkillParam Out;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SetupWrestler_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SetupWrestler;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Out;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetSkillParam_Statics::NewProp_SetupWrestler_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetSkillParam_Statics::NewProp_SetupWrestler = { "SetupWrestler", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_SetupWrestlerUtilityFunctions_eventGetSkillParam_Parms, SetupWrestler), Z_Construct_UScriptStruct_FWrestlerSetupParam, METADATA_PARAMS(Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetSkillParam_Statics::NewProp_SetupWrestler_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetSkillParam_Statics::NewProp_SetupWrestler_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetSkillParam_Statics::NewProp_Out = { "Out", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_SetupWrestlerUtilityFunctions_eventGetSkillParam_Parms, Out), Z_Construct_UScriptStruct_FWrestlingSkillParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetSkillParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetSkillParam_Statics::NewProp_SetupWrestler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetSkillParam_Statics::NewProp_Out,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetSkillParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FL_SetupWrestlerUtilityFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetSkillParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFL_SetupWrestlerUtilityFunctions, nullptr, "GetSkillParam", nullptr, nullptr, sizeof(FL_SetupWrestlerUtilityFunctions_eventGetSkillParam_Parms), Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetSkillParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetSkillParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetSkillParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetSkillParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetSkillParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetSkillParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetSnsNameText_Statics
	{
		struct FL_SetupWrestlerUtilityFunctions_eventGetSnsNameText_Parms
		{
			FWrestlerSetupParam SetupWrestler;
			FText Out;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SetupWrestler_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SetupWrestler;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Out;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetSnsNameText_Statics::NewProp_SetupWrestler_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetSnsNameText_Statics::NewProp_SetupWrestler = { "SetupWrestler", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_SetupWrestlerUtilityFunctions_eventGetSnsNameText_Parms, SetupWrestler), Z_Construct_UScriptStruct_FWrestlerSetupParam, METADATA_PARAMS(Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetSnsNameText_Statics::NewProp_SetupWrestler_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetSnsNameText_Statics::NewProp_SetupWrestler_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetSnsNameText_Statics::NewProp_Out = { "Out", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_SetupWrestlerUtilityFunctions_eventGetSnsNameText_Parms, Out), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetSnsNameText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetSnsNameText_Statics::NewProp_SetupWrestler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetSnsNameText_Statics::NewProp_Out,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetSnsNameText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FL_SetupWrestlerUtilityFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetSnsNameText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFL_SetupWrestlerUtilityFunctions, nullptr, "GetSnsNameText", nullptr, nullptr, sizeof(FL_SetupWrestlerUtilityFunctions_eventGetSnsNameText_Parms), Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetSnsNameText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetSnsNameText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetSnsNameText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetSnsNameText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetSnsNameText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetSnsNameText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetSpokenNameText_Statics
	{
		struct FL_SetupWrestlerUtilityFunctions_eventGetSpokenNameText_Parms
		{
			FWrestlerSetupParam SetupWrestler;
			FText Out;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SetupWrestler_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SetupWrestler;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Out;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetSpokenNameText_Statics::NewProp_SetupWrestler_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetSpokenNameText_Statics::NewProp_SetupWrestler = { "SetupWrestler", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_SetupWrestlerUtilityFunctions_eventGetSpokenNameText_Parms, SetupWrestler), Z_Construct_UScriptStruct_FWrestlerSetupParam, METADATA_PARAMS(Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetSpokenNameText_Statics::NewProp_SetupWrestler_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetSpokenNameText_Statics::NewProp_SetupWrestler_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetSpokenNameText_Statics::NewProp_Out = { "Out", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_SetupWrestlerUtilityFunctions_eventGetSpokenNameText_Parms, Out), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetSpokenNameText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetSpokenNameText_Statics::NewProp_SetupWrestler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetSpokenNameText_Statics::NewProp_Out,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetSpokenNameText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FL_SetupWrestlerUtilityFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetSpokenNameText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFL_SetupWrestlerUtilityFunctions, nullptr, "GetSpokenNameText", nullptr, nullptr, sizeof(FL_SetupWrestlerUtilityFunctions_eventGetSpokenNameText_Parms), Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetSpokenNameText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetSpokenNameText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetSpokenNameText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetSpokenNameText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetSpokenNameText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetSpokenNameText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetUID_Statics
	{
		struct FL_SetupWrestlerUtilityFunctions_eventGetUID_Parms
		{
			FWrestlerSetupParam SetupWrestler;
			FGuid ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SetupWrestler_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SetupWrestler;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetUID_Statics::NewProp_SetupWrestler_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetUID_Statics::NewProp_SetupWrestler = { "SetupWrestler", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_SetupWrestlerUtilityFunctions_eventGetUID_Parms, SetupWrestler), Z_Construct_UScriptStruct_FWrestlerSetupParam, METADATA_PARAMS(Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetUID_Statics::NewProp_SetupWrestler_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetUID_Statics::NewProp_SetupWrestler_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetUID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_SetupWrestlerUtilityFunctions_eventGetUID_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetUID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetUID_Statics::NewProp_SetupWrestler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetUID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetUID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FL_SetupWrestlerUtilityFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFL_SetupWrestlerUtilityFunctions, nullptr, "GetUID", nullptr, nullptr, sizeof(FL_SetupWrestlerUtilityFunctions_eventGetUID_Parms), Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetUID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetUID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetUID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetUID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetUID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetWrestlerID_Statics
	{
		struct FL_SetupWrestlerUtilityFunctions_eventGetWrestlerID_Parms
		{
			FWrestlerSetupParam SetupWrestler;
			EWrestlerID_N ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SetupWrestler_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SetupWrestler;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetWrestlerID_Statics::NewProp_SetupWrestler_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetWrestlerID_Statics::NewProp_SetupWrestler = { "SetupWrestler", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_SetupWrestlerUtilityFunctions_eventGetWrestlerID_Parms, SetupWrestler), Z_Construct_UScriptStruct_FWrestlerSetupParam, METADATA_PARAMS(Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetWrestlerID_Statics::NewProp_SetupWrestler_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetWrestlerID_Statics::NewProp_SetupWrestler_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetWrestlerID_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetWrestlerID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_SetupWrestlerUtilityFunctions_eventGetWrestlerID_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetWrestlerID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetWrestlerID_Statics::NewProp_SetupWrestler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetWrestlerID_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetWrestlerID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetWrestlerID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FL_SetupWrestlerUtilityFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetWrestlerID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFL_SetupWrestlerUtilityFunctions, nullptr, "GetWrestlerID", nullptr, nullptr, sizeof(FL_SetupWrestlerUtilityFunctions_eventGetWrestlerID_Parms), Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetWrestlerID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetWrestlerID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetWrestlerID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetWrestlerID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetWrestlerID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetWrestlerID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetWrestlerNameText_Statics
	{
		struct FL_SetupWrestlerUtilityFunctions_eventGetWrestlerNameText_Parms
		{
			FWrestlerSetupParam SetupWrestler;
			bool bUpper;
			FText Out;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SetupWrestler_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SetupWrestler;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUpper_MetaData[];
#endif
		static void NewProp_bUpper_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpper;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Out;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetWrestlerNameText_Statics::NewProp_SetupWrestler_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetWrestlerNameText_Statics::NewProp_SetupWrestler = { "SetupWrestler", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_SetupWrestlerUtilityFunctions_eventGetWrestlerNameText_Parms, SetupWrestler), Z_Construct_UScriptStruct_FWrestlerSetupParam, METADATA_PARAMS(Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetWrestlerNameText_Statics::NewProp_SetupWrestler_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetWrestlerNameText_Statics::NewProp_SetupWrestler_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetWrestlerNameText_Statics::NewProp_bUpper_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetWrestlerNameText_Statics::NewProp_bUpper_SetBit(void* Obj)
	{
		((FL_SetupWrestlerUtilityFunctions_eventGetWrestlerNameText_Parms*)Obj)->bUpper = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetWrestlerNameText_Statics::NewProp_bUpper = { "bUpper", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FL_SetupWrestlerUtilityFunctions_eventGetWrestlerNameText_Parms), &Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetWrestlerNameText_Statics::NewProp_bUpper_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetWrestlerNameText_Statics::NewProp_bUpper_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetWrestlerNameText_Statics::NewProp_bUpper_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetWrestlerNameText_Statics::NewProp_Out = { "Out", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_SetupWrestlerUtilityFunctions_eventGetWrestlerNameText_Parms, Out), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetWrestlerNameText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetWrestlerNameText_Statics::NewProp_SetupWrestler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetWrestlerNameText_Statics::NewProp_bUpper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetWrestlerNameText_Statics::NewProp_Out,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetWrestlerNameText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FL_SetupWrestlerUtilityFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetWrestlerNameText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFL_SetupWrestlerUtilityFunctions, nullptr, "GetWrestlerNameText", nullptr, nullptr, sizeof(FL_SetupWrestlerUtilityFunctions_eventGetWrestlerNameText_Parms), Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetWrestlerNameText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetWrestlerNameText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetWrestlerNameText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetWrestlerNameText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetWrestlerNameText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetWrestlerNameText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFL_SetupWrestlerUtilityFunctions_NoRegister()
	{
		return UFL_SetupWrestlerUtilityFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UFL_SetupWrestlerUtilityFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFL_SetupWrestlerUtilityFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFL_SetupWrestlerUtilityFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetEntranceParam, "GetEntranceParam" }, // 683791334
		{ &Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetFightStyle, "GetFightStyle" }, // 2748721196
		{ &Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetGender, "GetGender" }, // 860391868
		{ &Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetMovesParam, "GetMovesParam" }, // 3091579447
		{ &Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetMultiLineWrestlerNameText, "GetMultiLineWrestlerNameText" }, // 1322831821
		{ &Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetNickNameText, "GetNickNameText" }, // 2196160840
		{ &Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetShortNameText, "GetShortNameText" }, // 388959934
		{ &Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetSkillParam, "GetSkillParam" }, // 1866758008
		{ &Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetSnsNameText, "GetSnsNameText" }, // 4169485328
		{ &Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetSpokenNameText, "GetSpokenNameText" }, // 1134608642
		{ &Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetUID, "GetUID" }, // 376426496
		{ &Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetWrestlerID, "GetWrestlerID" }, // 1418334342
		{ &Z_Construct_UFunction_UFL_SetupWrestlerUtilityFunctions_GetWrestlerNameText, "GetWrestlerNameText" }, // 765542143
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFL_SetupWrestlerUtilityFunctions_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FL_SetupWrestlerUtilityFunctions.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FL_SetupWrestlerUtilityFunctions.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFL_SetupWrestlerUtilityFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFL_SetupWrestlerUtilityFunctions>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFL_SetupWrestlerUtilityFunctions_Statics::ClassParams = {
		&UFL_SetupWrestlerUtilityFunctions::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFL_SetupWrestlerUtilityFunctions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFL_SetupWrestlerUtilityFunctions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFL_SetupWrestlerUtilityFunctions()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFL_SetupWrestlerUtilityFunctions_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFL_SetupWrestlerUtilityFunctions, 1093367210);
	template<> CREATION_API UClass* StaticClass<UFL_SetupWrestlerUtilityFunctions>()
	{
		return UFL_SetupWrestlerUtilityFunctions::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFL_SetupWrestlerUtilityFunctions(Z_Construct_UClass_UFL_SetupWrestlerUtilityFunctions, &UFL_SetupWrestlerUtilityFunctions::StaticClass, TEXT("/Script/Creation"), TEXT("UFL_SetupWrestlerUtilityFunctions"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFL_SetupWrestlerUtilityFunctions);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
