// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/FL_HomeTownUtility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFL_HomeTownUtility() {}
// Cross Module References
	ELITE_GAME_API UClass* Z_Construct_UClass_UFL_HomeTownUtility_NoRegister();
	ELITE_GAME_API UClass* Z_Construct_UClass_UFL_HomeTownUtility();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FHomeTownID();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FHomeTown();
// End Cross Module References
	DEFINE_FUNCTION(UFL_HomeTownUtility::execBreakHomeTownID)
	{
		P_GET_STRUCT_REF(FHomeTownID,Z_Param_Out_HomeTownID);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutCountry);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutState);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutCity);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFL_HomeTownUtility::BreakHomeTownID(Z_Param_Out_HomeTownID,Z_Param_Out_OutCountry,Z_Param_Out_OutState,Z_Param_Out_OutCity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFL_HomeTownUtility::execGetHomeTownByID)
	{
		P_GET_STRUCT_REF(FHomeTownID,Z_Param_Out_HomeTownID);
		P_GET_STRUCT_REF(FHomeTown,Z_Param_Out_Out);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFL_HomeTownUtility::GetHomeTownByID(Z_Param_Out_HomeTownID,Z_Param_Out_Out);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFL_HomeTownUtility::execGetHomeTownKey)
	{
		P_GET_STRUCT_REF(FHomeTownID,Z_Param_Out_HomeTownID);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Out);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFL_HomeTownUtility::GetHomeTownKey(Z_Param_Out_HomeTownID,Z_Param_Out_Out);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFL_HomeTownUtility::execGetHomeTownText)
	{
		P_GET_STRUCT_REF(FHomeTownID,Z_Param_Out_HomeTownID);
		P_GET_UBOOL(Z_Param_bUpper);
		P_GET_UBOOL(Z_Param_bCountry);
		P_GET_UBOOL(Z_Param_bState);
		P_GET_UBOOL(Z_Param_bCity);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UFL_HomeTownUtility::GetHomeTownText(Z_Param_Out_HomeTownID,Z_Param_bUpper,Z_Param_bCountry,Z_Param_bState,Z_Param_bCity);
		P_NATIVE_END;
	}
	void UFL_HomeTownUtility::StaticRegisterNativesUFL_HomeTownUtility()
	{
		UClass* Class = UFL_HomeTownUtility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BreakHomeTownID", &UFL_HomeTownUtility::execBreakHomeTownID },
			{ "GetHomeTownByID", &UFL_HomeTownUtility::execGetHomeTownByID },
			{ "GetHomeTownKey", &UFL_HomeTownUtility::execGetHomeTownKey },
			{ "GetHomeTownText", &UFL_HomeTownUtility::execGetHomeTownText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFL_HomeTownUtility_BreakHomeTownID_Statics
	{
		struct FL_HomeTownUtility_eventBreakHomeTownID_Parms
		{
			FHomeTownID HomeTownID;
			int32 OutCountry;
			int32 OutState;
			int32 OutCity;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HomeTownID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HomeTownID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutCountry;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutState;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutCity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_HomeTownUtility_BreakHomeTownID_Statics::NewProp_HomeTownID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFL_HomeTownUtility_BreakHomeTownID_Statics::NewProp_HomeTownID = { "HomeTownID", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_HomeTownUtility_eventBreakHomeTownID_Parms, HomeTownID), Z_Construct_UScriptStruct_FHomeTownID, METADATA_PARAMS(Z_Construct_UFunction_UFL_HomeTownUtility_BreakHomeTownID_Statics::NewProp_HomeTownID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_HomeTownUtility_BreakHomeTownID_Statics::NewProp_HomeTownID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFL_HomeTownUtility_BreakHomeTownID_Statics::NewProp_OutCountry = { "OutCountry", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_HomeTownUtility_eventBreakHomeTownID_Parms, OutCountry), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFL_HomeTownUtility_BreakHomeTownID_Statics::NewProp_OutState = { "OutState", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_HomeTownUtility_eventBreakHomeTownID_Parms, OutState), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFL_HomeTownUtility_BreakHomeTownID_Statics::NewProp_OutCity = { "OutCity", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_HomeTownUtility_eventBreakHomeTownID_Parms, OutCity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFL_HomeTownUtility_BreakHomeTownID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_HomeTownUtility_BreakHomeTownID_Statics::NewProp_HomeTownID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_HomeTownUtility_BreakHomeTownID_Statics::NewProp_OutCountry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_HomeTownUtility_BreakHomeTownID_Statics::NewProp_OutState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_HomeTownUtility_BreakHomeTownID_Statics::NewProp_OutCity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_HomeTownUtility_BreakHomeTownID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FL_HomeTownUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFL_HomeTownUtility_BreakHomeTownID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFL_HomeTownUtility, nullptr, "BreakHomeTownID", nullptr, nullptr, sizeof(FL_HomeTownUtility_eventBreakHomeTownID_Parms), Z_Construct_UFunction_UFL_HomeTownUtility_BreakHomeTownID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_HomeTownUtility_BreakHomeTownID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFL_HomeTownUtility_BreakHomeTownID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_HomeTownUtility_BreakHomeTownID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFL_HomeTownUtility_BreakHomeTownID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFL_HomeTownUtility_BreakHomeTownID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownByID_Statics
	{
		struct FL_HomeTownUtility_eventGetHomeTownByID_Parms
		{
			FHomeTownID HomeTownID;
			FHomeTown Out;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HomeTownID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HomeTownID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Out;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownByID_Statics::NewProp_HomeTownID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownByID_Statics::NewProp_HomeTownID = { "HomeTownID", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_HomeTownUtility_eventGetHomeTownByID_Parms, HomeTownID), Z_Construct_UScriptStruct_FHomeTownID, METADATA_PARAMS(Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownByID_Statics::NewProp_HomeTownID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownByID_Statics::NewProp_HomeTownID_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownByID_Statics::NewProp_Out = { "Out", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_HomeTownUtility_eventGetHomeTownByID_Parms, Out), Z_Construct_UScriptStruct_FHomeTown, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownByID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownByID_Statics::NewProp_HomeTownID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownByID_Statics::NewProp_Out,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownByID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FL_HomeTownUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownByID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFL_HomeTownUtility, nullptr, "GetHomeTownByID", nullptr, nullptr, sizeof(FL_HomeTownUtility_eventGetHomeTownByID_Parms), Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownByID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownByID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownByID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownByID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownByID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownByID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownKey_Statics
	{
		struct FL_HomeTownUtility_eventGetHomeTownKey_Parms
		{
			FHomeTownID HomeTownID;
			FName Out;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HomeTownID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HomeTownID;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Out;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownKey_Statics::NewProp_HomeTownID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownKey_Statics::NewProp_HomeTownID = { "HomeTownID", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_HomeTownUtility_eventGetHomeTownKey_Parms, HomeTownID), Z_Construct_UScriptStruct_FHomeTownID, METADATA_PARAMS(Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownKey_Statics::NewProp_HomeTownID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownKey_Statics::NewProp_HomeTownID_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownKey_Statics::NewProp_Out = { "Out", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_HomeTownUtility_eventGetHomeTownKey_Parms, Out), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownKey_Statics::NewProp_HomeTownID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownKey_Statics::NewProp_Out,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FL_HomeTownUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFL_HomeTownUtility, nullptr, "GetHomeTownKey", nullptr, nullptr, sizeof(FL_HomeTownUtility_eventGetHomeTownKey_Parms), Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownText_Statics
	{
		struct FL_HomeTownUtility_eventGetHomeTownText_Parms
		{
			FHomeTownID HomeTownID;
			bool bUpper;
			bool bCountry;
			bool bState;
			bool bCity;
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HomeTownID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HomeTownID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUpper_MetaData[];
#endif
		static void NewProp_bUpper_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCountry_MetaData[];
#endif
		static void NewProp_bCountry_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCountry;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bState_MetaData[];
#endif
		static void NewProp_bState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCity_MetaData[];
#endif
		static void NewProp_bCity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCity;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownText_Statics::NewProp_HomeTownID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownText_Statics::NewProp_HomeTownID = { "HomeTownID", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_HomeTownUtility_eventGetHomeTownText_Parms, HomeTownID), Z_Construct_UScriptStruct_FHomeTownID, METADATA_PARAMS(Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownText_Statics::NewProp_HomeTownID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownText_Statics::NewProp_HomeTownID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownText_Statics::NewProp_bUpper_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownText_Statics::NewProp_bUpper_SetBit(void* Obj)
	{
		((FL_HomeTownUtility_eventGetHomeTownText_Parms*)Obj)->bUpper = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownText_Statics::NewProp_bUpper = { "bUpper", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FL_HomeTownUtility_eventGetHomeTownText_Parms), &Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownText_Statics::NewProp_bUpper_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownText_Statics::NewProp_bUpper_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownText_Statics::NewProp_bUpper_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownText_Statics::NewProp_bCountry_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownText_Statics::NewProp_bCountry_SetBit(void* Obj)
	{
		((FL_HomeTownUtility_eventGetHomeTownText_Parms*)Obj)->bCountry = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownText_Statics::NewProp_bCountry = { "bCountry", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FL_HomeTownUtility_eventGetHomeTownText_Parms), &Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownText_Statics::NewProp_bCountry_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownText_Statics::NewProp_bCountry_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownText_Statics::NewProp_bCountry_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownText_Statics::NewProp_bState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownText_Statics::NewProp_bState_SetBit(void* Obj)
	{
		((FL_HomeTownUtility_eventGetHomeTownText_Parms*)Obj)->bState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownText_Statics::NewProp_bState = { "bState", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FL_HomeTownUtility_eventGetHomeTownText_Parms), &Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownText_Statics::NewProp_bState_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownText_Statics::NewProp_bState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownText_Statics::NewProp_bState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownText_Statics::NewProp_bCity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownText_Statics::NewProp_bCity_SetBit(void* Obj)
	{
		((FL_HomeTownUtility_eventGetHomeTownText_Parms*)Obj)->bCity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownText_Statics::NewProp_bCity = { "bCity", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FL_HomeTownUtility_eventGetHomeTownText_Parms), &Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownText_Statics::NewProp_bCity_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownText_Statics::NewProp_bCity_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownText_Statics::NewProp_bCity_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_HomeTownUtility_eventGetHomeTownText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownText_Statics::NewProp_HomeTownID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownText_Statics::NewProp_bUpper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownText_Statics::NewProp_bCountry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownText_Statics::NewProp_bState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownText_Statics::NewProp_bCity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FL_HomeTownUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFL_HomeTownUtility, nullptr, "GetHomeTownText", nullptr, nullptr, sizeof(FL_HomeTownUtility_eventGetHomeTownText_Parms), Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFL_HomeTownUtility_NoRegister()
	{
		return UFL_HomeTownUtility::StaticClass();
	}
	struct Z_Construct_UClass_UFL_HomeTownUtility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFL_HomeTownUtility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFL_HomeTownUtility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFL_HomeTownUtility_BreakHomeTownID, "BreakHomeTownID" }, // 1012768665
		{ &Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownByID, "GetHomeTownByID" }, // 731466697
		{ &Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownKey, "GetHomeTownKey" }, // 3237233118
		{ &Z_Construct_UFunction_UFL_HomeTownUtility_GetHomeTownText, "GetHomeTownText" }, // 3687157017
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFL_HomeTownUtility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FL_HomeTownUtility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FL_HomeTownUtility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFL_HomeTownUtility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFL_HomeTownUtility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFL_HomeTownUtility_Statics::ClassParams = {
		&UFL_HomeTownUtility::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFL_HomeTownUtility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFL_HomeTownUtility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFL_HomeTownUtility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFL_HomeTownUtility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFL_HomeTownUtility, 4029019111);
	template<> ELITE_GAME_API UClass* StaticClass<UFL_HomeTownUtility>()
	{
		return UFL_HomeTownUtility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFL_HomeTownUtility(Z_Construct_UClass_UFL_HomeTownUtility, &UFL_HomeTownUtility::StaticClass, TEXT("/Script/ELITE_Game"), TEXT("UFL_HomeTownUtility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFL_HomeTownUtility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
