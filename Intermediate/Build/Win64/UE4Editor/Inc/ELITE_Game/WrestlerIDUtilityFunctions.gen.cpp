// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/WrestlerIDUtilityFunctions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWrestlerIDUtilityFunctions() {}
// Cross Module References
	ELITE_GAME_API UClass* Z_Construct_UClass_UWrestlerIDUtilityFunctions_NoRegister();
	ELITE_GAME_API UClass* Z_Construct_UClass_UWrestlerIDUtilityFunctions();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ECharacterType();
// End Cross Module References
	DEFINE_FUNCTION(UWrestlerIDUtilityFunctions::execIsEditWrestlerID)
	{
		P_GET_ENUM(EWrestlerID_N,Z_Param_ID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UWrestlerIDUtilityFunctions::IsEditWrestlerID(EWrestlerID_N(Z_Param_ID));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWrestlerIDUtilityFunctions::execIsEditWrestlerIDImpl)
	{
		P_GET_ENUM(EWrestlerID_N,Z_Param_ID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UWrestlerIDUtilityFunctions::IsEditWrestlerIDImpl(EWrestlerID_N(Z_Param_ID));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWrestlerIDUtilityFunctions::execIsNpcID)
	{
		P_GET_ENUM(EWrestlerID_N,Z_Param_ID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UWrestlerIDUtilityFunctions::IsNpcID(EWrestlerID_N(Z_Param_ID));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWrestlerIDUtilityFunctions::execIsNpcIDImpl)
	{
		P_GET_ENUM(EWrestlerID_N,Z_Param_ID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UWrestlerIDUtilityFunctions::IsNpcIDImpl(EWrestlerID_N(Z_Param_ID));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWrestlerIDUtilityFunctions::execIsRefereeID)
	{
		P_GET_ENUM(EWrestlerID_N,Z_Param_ID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UWrestlerIDUtilityFunctions::IsRefereeID(EWrestlerID_N(Z_Param_ID));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWrestlerIDUtilityFunctions::execIsRefereeIDImpl)
	{
		P_GET_ENUM(EWrestlerID_N,Z_Param_ID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UWrestlerIDUtilityFunctions::IsRefereeIDImpl(EWrestlerID_N(Z_Param_ID));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWrestlerIDUtilityFunctions::execIsRosterID)
	{
		P_GET_ENUM(EWrestlerID_N,Z_Param_ID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UWrestlerIDUtilityFunctions::IsRosterID(EWrestlerID_N(Z_Param_ID));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWrestlerIDUtilityFunctions::execIsRosterIDImpl)
	{
		P_GET_ENUM(EWrestlerID_N,Z_Param_ID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UWrestlerIDUtilityFunctions::IsRosterIDImpl(EWrestlerID_N(Z_Param_ID));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWrestlerIDUtilityFunctions::execIsValidID)
	{
		P_GET_ENUM(EWrestlerID_N,Z_Param_ID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UWrestlerIDUtilityFunctions::IsValidID(EWrestlerID_N(Z_Param_ID));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWrestlerIDUtilityFunctions::execSwitchCharacterType)
	{
		P_GET_ENUM(EWrestlerID_N,Z_Param_ID);
		P_GET_ENUM_REF(ECharacterType,Z_Param_Out_resultType);
		P_FINISH;
		P_NATIVE_BEGIN;
		UWrestlerIDUtilityFunctions::SwitchCharacterType(EWrestlerID_N(Z_Param_ID),(ECharacterType&)(Z_Param_Out_resultType));
		P_NATIVE_END;
	}
	void UWrestlerIDUtilityFunctions::StaticRegisterNativesUWrestlerIDUtilityFunctions()
	{
		UClass* Class = UWrestlerIDUtilityFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsEditWrestlerID", &UWrestlerIDUtilityFunctions::execIsEditWrestlerID },
			{ "IsEditWrestlerIDImpl", &UWrestlerIDUtilityFunctions::execIsEditWrestlerIDImpl },
			{ "IsNpcID", &UWrestlerIDUtilityFunctions::execIsNpcID },
			{ "IsNpcIDImpl", &UWrestlerIDUtilityFunctions::execIsNpcIDImpl },
			{ "IsRefereeID", &UWrestlerIDUtilityFunctions::execIsRefereeID },
			{ "IsRefereeIDImpl", &UWrestlerIDUtilityFunctions::execIsRefereeIDImpl },
			{ "IsRosterID", &UWrestlerIDUtilityFunctions::execIsRosterID },
			{ "IsRosterIDImpl", &UWrestlerIDUtilityFunctions::execIsRosterIDImpl },
			{ "IsValidID", &UWrestlerIDUtilityFunctions::execIsValidID },
			{ "SwitchCharacterType", &UWrestlerIDUtilityFunctions::execSwitchCharacterType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsEditWrestlerID_Statics
	{
		struct WrestlerIDUtilityFunctions_eventIsEditWrestlerID_Parms
		{
			EWrestlerID_N ID;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ID_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsEditWrestlerID_Statics::NewProp_ID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsEditWrestlerID_Statics::NewProp_ID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsEditWrestlerID_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WrestlerIDUtilityFunctions_eventIsEditWrestlerID_Parms, ID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsEditWrestlerID_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsEditWrestlerID_Statics::NewProp_ID_MetaData)) };
	void Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsEditWrestlerID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WrestlerIDUtilityFunctions_eventIsEditWrestlerID_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsEditWrestlerID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WrestlerIDUtilityFunctions_eventIsEditWrestlerID_Parms), &Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsEditWrestlerID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsEditWrestlerID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsEditWrestlerID_Statics::NewProp_ID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsEditWrestlerID_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsEditWrestlerID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsEditWrestlerID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WrestlerIDUtilityFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsEditWrestlerID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrestlerIDUtilityFunctions, nullptr, "IsEditWrestlerID", nullptr, nullptr, sizeof(WrestlerIDUtilityFunctions_eventIsEditWrestlerID_Parms), Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsEditWrestlerID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsEditWrestlerID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsEditWrestlerID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsEditWrestlerID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsEditWrestlerID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsEditWrestlerID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsEditWrestlerIDImpl_Statics
	{
		struct WrestlerIDUtilityFunctions_eventIsEditWrestlerIDImpl_Parms
		{
			EWrestlerID_N ID;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ID_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsEditWrestlerIDImpl_Statics::NewProp_ID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsEditWrestlerIDImpl_Statics::NewProp_ID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsEditWrestlerIDImpl_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WrestlerIDUtilityFunctions_eventIsEditWrestlerIDImpl_Parms, ID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsEditWrestlerIDImpl_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsEditWrestlerIDImpl_Statics::NewProp_ID_MetaData)) };
	void Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsEditWrestlerIDImpl_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WrestlerIDUtilityFunctions_eventIsEditWrestlerIDImpl_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsEditWrestlerIDImpl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WrestlerIDUtilityFunctions_eventIsEditWrestlerIDImpl_Parms), &Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsEditWrestlerIDImpl_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsEditWrestlerIDImpl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsEditWrestlerIDImpl_Statics::NewProp_ID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsEditWrestlerIDImpl_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsEditWrestlerIDImpl_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsEditWrestlerIDImpl_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WrestlerIDUtilityFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsEditWrestlerIDImpl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrestlerIDUtilityFunctions, nullptr, "IsEditWrestlerIDImpl", nullptr, nullptr, sizeof(WrestlerIDUtilityFunctions_eventIsEditWrestlerIDImpl_Parms), Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsEditWrestlerIDImpl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsEditWrestlerIDImpl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsEditWrestlerIDImpl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsEditWrestlerIDImpl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsEditWrestlerIDImpl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsEditWrestlerIDImpl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsNpcID_Statics
	{
		struct WrestlerIDUtilityFunctions_eventIsNpcID_Parms
		{
			EWrestlerID_N ID;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ID_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsNpcID_Statics::NewProp_ID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsNpcID_Statics::NewProp_ID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsNpcID_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WrestlerIDUtilityFunctions_eventIsNpcID_Parms, ID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsNpcID_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsNpcID_Statics::NewProp_ID_MetaData)) };
	void Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsNpcID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WrestlerIDUtilityFunctions_eventIsNpcID_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsNpcID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WrestlerIDUtilityFunctions_eventIsNpcID_Parms), &Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsNpcID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsNpcID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsNpcID_Statics::NewProp_ID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsNpcID_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsNpcID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsNpcID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WrestlerIDUtilityFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsNpcID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrestlerIDUtilityFunctions, nullptr, "IsNpcID", nullptr, nullptr, sizeof(WrestlerIDUtilityFunctions_eventIsNpcID_Parms), Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsNpcID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsNpcID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsNpcID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsNpcID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsNpcID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsNpcID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsNpcIDImpl_Statics
	{
		struct WrestlerIDUtilityFunctions_eventIsNpcIDImpl_Parms
		{
			EWrestlerID_N ID;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ID_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsNpcIDImpl_Statics::NewProp_ID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsNpcIDImpl_Statics::NewProp_ID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsNpcIDImpl_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WrestlerIDUtilityFunctions_eventIsNpcIDImpl_Parms, ID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsNpcIDImpl_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsNpcIDImpl_Statics::NewProp_ID_MetaData)) };
	void Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsNpcIDImpl_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WrestlerIDUtilityFunctions_eventIsNpcIDImpl_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsNpcIDImpl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WrestlerIDUtilityFunctions_eventIsNpcIDImpl_Parms), &Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsNpcIDImpl_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsNpcIDImpl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsNpcIDImpl_Statics::NewProp_ID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsNpcIDImpl_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsNpcIDImpl_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsNpcIDImpl_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WrestlerIDUtilityFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsNpcIDImpl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrestlerIDUtilityFunctions, nullptr, "IsNpcIDImpl", nullptr, nullptr, sizeof(WrestlerIDUtilityFunctions_eventIsNpcIDImpl_Parms), Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsNpcIDImpl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsNpcIDImpl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsNpcIDImpl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsNpcIDImpl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsNpcIDImpl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsNpcIDImpl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRefereeID_Statics
	{
		struct WrestlerIDUtilityFunctions_eventIsRefereeID_Parms
		{
			EWrestlerID_N ID;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ID_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRefereeID_Statics::NewProp_ID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRefereeID_Statics::NewProp_ID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRefereeID_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WrestlerIDUtilityFunctions_eventIsRefereeID_Parms, ID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRefereeID_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRefereeID_Statics::NewProp_ID_MetaData)) };
	void Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRefereeID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WrestlerIDUtilityFunctions_eventIsRefereeID_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRefereeID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WrestlerIDUtilityFunctions_eventIsRefereeID_Parms), &Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRefereeID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRefereeID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRefereeID_Statics::NewProp_ID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRefereeID_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRefereeID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRefereeID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WrestlerIDUtilityFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRefereeID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrestlerIDUtilityFunctions, nullptr, "IsRefereeID", nullptr, nullptr, sizeof(WrestlerIDUtilityFunctions_eventIsRefereeID_Parms), Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRefereeID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRefereeID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRefereeID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRefereeID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRefereeID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRefereeID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRefereeIDImpl_Statics
	{
		struct WrestlerIDUtilityFunctions_eventIsRefereeIDImpl_Parms
		{
			EWrestlerID_N ID;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ID_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRefereeIDImpl_Statics::NewProp_ID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRefereeIDImpl_Statics::NewProp_ID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRefereeIDImpl_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WrestlerIDUtilityFunctions_eventIsRefereeIDImpl_Parms, ID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRefereeIDImpl_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRefereeIDImpl_Statics::NewProp_ID_MetaData)) };
	void Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRefereeIDImpl_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WrestlerIDUtilityFunctions_eventIsRefereeIDImpl_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRefereeIDImpl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WrestlerIDUtilityFunctions_eventIsRefereeIDImpl_Parms), &Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRefereeIDImpl_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRefereeIDImpl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRefereeIDImpl_Statics::NewProp_ID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRefereeIDImpl_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRefereeIDImpl_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRefereeIDImpl_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WrestlerIDUtilityFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRefereeIDImpl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrestlerIDUtilityFunctions, nullptr, "IsRefereeIDImpl", nullptr, nullptr, sizeof(WrestlerIDUtilityFunctions_eventIsRefereeIDImpl_Parms), Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRefereeIDImpl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRefereeIDImpl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRefereeIDImpl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRefereeIDImpl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRefereeIDImpl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRefereeIDImpl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRosterID_Statics
	{
		struct WrestlerIDUtilityFunctions_eventIsRosterID_Parms
		{
			EWrestlerID_N ID;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ID_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRosterID_Statics::NewProp_ID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRosterID_Statics::NewProp_ID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRosterID_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WrestlerIDUtilityFunctions_eventIsRosterID_Parms, ID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRosterID_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRosterID_Statics::NewProp_ID_MetaData)) };
	void Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRosterID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WrestlerIDUtilityFunctions_eventIsRosterID_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRosterID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WrestlerIDUtilityFunctions_eventIsRosterID_Parms), &Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRosterID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRosterID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRosterID_Statics::NewProp_ID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRosterID_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRosterID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRosterID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WrestlerIDUtilityFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRosterID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrestlerIDUtilityFunctions, nullptr, "IsRosterID", nullptr, nullptr, sizeof(WrestlerIDUtilityFunctions_eventIsRosterID_Parms), Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRosterID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRosterID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRosterID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRosterID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRosterID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRosterID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRosterIDImpl_Statics
	{
		struct WrestlerIDUtilityFunctions_eventIsRosterIDImpl_Parms
		{
			EWrestlerID_N ID;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ID_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRosterIDImpl_Statics::NewProp_ID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRosterIDImpl_Statics::NewProp_ID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRosterIDImpl_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WrestlerIDUtilityFunctions_eventIsRosterIDImpl_Parms, ID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRosterIDImpl_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRosterIDImpl_Statics::NewProp_ID_MetaData)) };
	void Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRosterIDImpl_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WrestlerIDUtilityFunctions_eventIsRosterIDImpl_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRosterIDImpl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WrestlerIDUtilityFunctions_eventIsRosterIDImpl_Parms), &Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRosterIDImpl_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRosterIDImpl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRosterIDImpl_Statics::NewProp_ID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRosterIDImpl_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRosterIDImpl_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRosterIDImpl_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WrestlerIDUtilityFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRosterIDImpl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrestlerIDUtilityFunctions, nullptr, "IsRosterIDImpl", nullptr, nullptr, sizeof(WrestlerIDUtilityFunctions_eventIsRosterIDImpl_Parms), Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRosterIDImpl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRosterIDImpl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRosterIDImpl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRosterIDImpl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRosterIDImpl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRosterIDImpl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsValidID_Statics
	{
		struct WrestlerIDUtilityFunctions_eventIsValidID_Parms
		{
			EWrestlerID_N ID;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ID_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsValidID_Statics::NewProp_ID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsValidID_Statics::NewProp_ID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsValidID_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WrestlerIDUtilityFunctions_eventIsValidID_Parms, ID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsValidID_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsValidID_Statics::NewProp_ID_MetaData)) };
	void Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsValidID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WrestlerIDUtilityFunctions_eventIsValidID_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsValidID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WrestlerIDUtilityFunctions_eventIsValidID_Parms), &Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsValidID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsValidID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsValidID_Statics::NewProp_ID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsValidID_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsValidID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsValidID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WrestlerIDUtilityFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsValidID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrestlerIDUtilityFunctions, nullptr, "IsValidID", nullptr, nullptr, sizeof(WrestlerIDUtilityFunctions_eventIsValidID_Parms), Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsValidID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsValidID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsValidID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsValidID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsValidID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsValidID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWrestlerIDUtilityFunctions_SwitchCharacterType_Statics
	{
		struct WrestlerIDUtilityFunctions_eventSwitchCharacterType_Parms
		{
			EWrestlerID_N ID;
			ECharacterType resultType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ID_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_resultType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_resultType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWrestlerIDUtilityFunctions_SwitchCharacterType_Statics::NewProp_ID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrestlerIDUtilityFunctions_SwitchCharacterType_Statics::NewProp_ID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWrestlerIDUtilityFunctions_SwitchCharacterType_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WrestlerIDUtilityFunctions_eventSwitchCharacterType_Parms, ID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UFunction_UWrestlerIDUtilityFunctions_SwitchCharacterType_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerIDUtilityFunctions_SwitchCharacterType_Statics::NewProp_ID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWrestlerIDUtilityFunctions_SwitchCharacterType_Statics::NewProp_resultType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWrestlerIDUtilityFunctions_SwitchCharacterType_Statics::NewProp_resultType = { "resultType", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WrestlerIDUtilityFunctions_eventSwitchCharacterType_Parms, resultType), Z_Construct_UEnum_ELITE_Game_ECharacterType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWrestlerIDUtilityFunctions_SwitchCharacterType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerIDUtilityFunctions_SwitchCharacterType_Statics::NewProp_ID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerIDUtilityFunctions_SwitchCharacterType_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerIDUtilityFunctions_SwitchCharacterType_Statics::NewProp_resultType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerIDUtilityFunctions_SwitchCharacterType_Statics::NewProp_resultType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrestlerIDUtilityFunctions_SwitchCharacterType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WrestlerIDUtilityFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWrestlerIDUtilityFunctions_SwitchCharacterType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrestlerIDUtilityFunctions, nullptr, "SwitchCharacterType", nullptr, nullptr, sizeof(WrestlerIDUtilityFunctions_eventSwitchCharacterType_Parms), Z_Construct_UFunction_UWrestlerIDUtilityFunctions_SwitchCharacterType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerIDUtilityFunctions_SwitchCharacterType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWrestlerIDUtilityFunctions_SwitchCharacterType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerIDUtilityFunctions_SwitchCharacterType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWrestlerIDUtilityFunctions_SwitchCharacterType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWrestlerIDUtilityFunctions_SwitchCharacterType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWrestlerIDUtilityFunctions_NoRegister()
	{
		return UWrestlerIDUtilityFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UWrestlerIDUtilityFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWrestlerIDUtilityFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWrestlerIDUtilityFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsEditWrestlerID, "IsEditWrestlerID" }, // 3771851898
		{ &Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsEditWrestlerIDImpl, "IsEditWrestlerIDImpl" }, // 2964253813
		{ &Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsNpcID, "IsNpcID" }, // 2331998579
		{ &Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsNpcIDImpl, "IsNpcIDImpl" }, // 2497017730
		{ &Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRefereeID, "IsRefereeID" }, // 3353745259
		{ &Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRefereeIDImpl, "IsRefereeIDImpl" }, // 581251591
		{ &Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRosterID, "IsRosterID" }, // 1501200739
		{ &Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsRosterIDImpl, "IsRosterIDImpl" }, // 3609579365
		{ &Z_Construct_UFunction_UWrestlerIDUtilityFunctions_IsValidID, "IsValidID" }, // 1909754186
		{ &Z_Construct_UFunction_UWrestlerIDUtilityFunctions_SwitchCharacterType, "SwitchCharacterType" }, // 1295981682
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWrestlerIDUtilityFunctions_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "WrestlerIDUtilityFunctions.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WrestlerIDUtilityFunctions.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWrestlerIDUtilityFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWrestlerIDUtilityFunctions>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWrestlerIDUtilityFunctions_Statics::ClassParams = {
		&UWrestlerIDUtilityFunctions::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWrestlerIDUtilityFunctions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWrestlerIDUtilityFunctions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWrestlerIDUtilityFunctions()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWrestlerIDUtilityFunctions_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWrestlerIDUtilityFunctions, 2267199671);
	template<> ELITE_GAME_API UClass* StaticClass<UWrestlerIDUtilityFunctions>()
	{
		return UWrestlerIDUtilityFunctions::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWrestlerIDUtilityFunctions(Z_Construct_UClass_UWrestlerIDUtilityFunctions, &UWrestlerIDUtilityFunctions::StaticClass, TEXT("/Script/ELITE_Game"), TEXT("UWrestlerIDUtilityFunctions"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWrestlerIDUtilityFunctions);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
