// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELEntranceNameplateCommentUtilityFunction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELEntranceNameplateCommentUtilityFunction() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELEntranceNameplateCommentUtilityFunction_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELEntranceNameplateCommentUtilityFunction();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UClass* Z_Construct_UClass_USaveDataObject_PlayerData_NoRegister();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EELEntranceNameplateCommentConditionType();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EELEntranceNameplateCommentCompareType();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EELTeamID();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FWrestlingSkillParam();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EELEntranceNameplateCommentValueType();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMoves_Finisher();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EELBelt();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EBodyWeightType();
// End Cross Module References
	DEFINE_FUNCTION(UELEntranceNameplateCommentUtilityFunction::execCompareTeamParameter)
	{
		P_GET_OBJECT(USaveDataObject_PlayerData,Z_Param_PlayerData);
		P_GET_ENUM(EELEntranceNameplateCommentConditionType,Z_Param_ConditionType);
		P_GET_ENUM(EELEntranceNameplateCommentCompareType,Z_Param_CompareType);
		P_GET_ENUM(EELTeamID,Z_Param_TeamId);
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_GET_UBOOL_REF(Z_Param_Out_Success);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELEntranceNameplateCommentUtilityFunction::CompareTeamParameter(Z_Param_PlayerData,EELEntranceNameplateCommentConditionType(Z_Param_ConditionType),EELEntranceNameplateCommentCompareType(Z_Param_CompareType),EELTeamID(Z_Param_TeamId),Z_Param_Value,Z_Param_Out_Success);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEntranceNameplateCommentUtilityFunction::execCompareWrestlerParameter)
	{
		P_GET_OBJECT(USaveDataObject_PlayerData,Z_Param_PlayerData);
		P_GET_ENUM(EELEntranceNameplateCommentConditionType,Z_Param_ConditionType);
		P_GET_ENUM(EELEntranceNameplateCommentCompareType,Z_Param_CompareType);
		P_GET_ENUM(EWrestlerID_N,Z_Param_WrestlerID);
		P_GET_STRUCT(FGuid,Z_Param_UID);
		P_GET_STRUCT_REF(FWrestlingSkillParam,Z_Param_Out_WrestlingSkillParam);
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_GET_UBOOL_REF(Z_Param_Out_Success);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELEntranceNameplateCommentUtilityFunction::CompareWrestlerParameter(Z_Param_PlayerData,EELEntranceNameplateCommentConditionType(Z_Param_ConditionType),EELEntranceNameplateCommentCompareType(Z_Param_CompareType),EWrestlerID_N(Z_Param_WrestlerID),Z_Param_UID,Z_Param_Out_WrestlingSkillParam,Z_Param_Value,Z_Param_Out_Success);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEntranceNameplateCommentUtilityFunction::execConvertReplaceParameterToString)
	{
		P_GET_ENUM(EELEntranceNameplateCommentValueType,Z_Param_ValueType);
		P_GET_PROPERTY(FStrProperty,Z_Param_WrestlerName);
		P_GET_PROPERTY(FStrProperty,Z_Param_ManagerName);
		P_GET_STRUCT_REF(FELMoves_Finisher,Z_Param_Out_Finisher);
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UELEntranceNameplateCommentUtilityFunction::ConvertReplaceParameterToString(EELEntranceNameplateCommentValueType(Z_Param_ValueType),Z_Param_WrestlerName,Z_Param_ManagerName,Z_Param_Out_Finisher,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEntranceNameplateCommentUtilityFunction::execGetCachedPlayerDataObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USaveDataObject_PlayerData**)Z_Param__Result=UELEntranceNameplateCommentUtilityFunction::GetCachedPlayerDataObject();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEntranceNameplateCommentUtilityFunction::execGetValueForReplaceParameter)
	{
		P_GET_ENUM(EELEntranceNameplateCommentValueType,Z_Param_ValueType);
		P_GET_ENUM(EWrestlerID_N,Z_Param_WrestlerID);
		P_GET_STRUCT(FGuid,Z_Param_UID);
		P_GET_ENUM(EWrestlerID_N,Z_Param_ManagerID);
		P_GET_STRUCT(FGuid,Z_Param_ManagerUID);
		P_GET_ENUM(EELBelt,Z_Param_Belt);
		P_GET_ENUM(EBodyWeightType,Z_Param_WeightType);
		P_GET_ENUM(EELTeamID,Z_Param_TeamId);
		P_GET_STRUCT_REF(FELMoves_Finisher,Z_Param_Out_Finisher);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELEntranceNameplateCommentUtilityFunction::GetValueForReplaceParameter(EELEntranceNameplateCommentValueType(Z_Param_ValueType),EWrestlerID_N(Z_Param_WrestlerID),Z_Param_UID,EWrestlerID_N(Z_Param_ManagerID),Z_Param_ManagerUID,EELBelt(Z_Param_Belt),EBodyWeightType(Z_Param_WeightType),EELTeamID(Z_Param_TeamId),Z_Param_Out_Finisher,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	void UELEntranceNameplateCommentUtilityFunction::StaticRegisterNativesUELEntranceNameplateCommentUtilityFunction()
	{
		UClass* Class = UELEntranceNameplateCommentUtilityFunction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CompareTeamParameter", &UELEntranceNameplateCommentUtilityFunction::execCompareTeamParameter },
			{ "CompareWrestlerParameter", &UELEntranceNameplateCommentUtilityFunction::execCompareWrestlerParameter },
			{ "ConvertReplaceParameterToString", &UELEntranceNameplateCommentUtilityFunction::execConvertReplaceParameterToString },
			{ "GetCachedPlayerDataObject", &UELEntranceNameplateCommentUtilityFunction::execGetCachedPlayerDataObject },
			{ "GetValueForReplaceParameter", &UELEntranceNameplateCommentUtilityFunction::execGetValueForReplaceParameter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareTeamParameter_Statics
	{
		struct ELEntranceNameplateCommentUtilityFunction_eventCompareTeamParameter_Parms
		{
			const USaveDataObject_PlayerData* PlayerData;
			EELEntranceNameplateCommentConditionType ConditionType;
			EELEntranceNameplateCommentCompareType CompareType;
			EELTeamID TeamId;
			int32 Value;
			bool Success;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ConditionType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ConditionType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CompareType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CompareType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TeamId_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TeamId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static void NewProp_Success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Success;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareTeamParameter_Statics::NewProp_PlayerData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareTeamParameter_Statics::NewProp_PlayerData = { "PlayerData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceNameplateCommentUtilityFunction_eventCompareTeamParameter_Parms, PlayerData), Z_Construct_UClass_USaveDataObject_PlayerData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareTeamParameter_Statics::NewProp_PlayerData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareTeamParameter_Statics::NewProp_PlayerData_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareTeamParameter_Statics::NewProp_ConditionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareTeamParameter_Statics::NewProp_ConditionType = { "ConditionType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceNameplateCommentUtilityFunction_eventCompareTeamParameter_Parms, ConditionType), Z_Construct_UEnum_ELITE_Game_EELEntranceNameplateCommentConditionType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareTeamParameter_Statics::NewProp_CompareType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareTeamParameter_Statics::NewProp_CompareType = { "CompareType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceNameplateCommentUtilityFunction_eventCompareTeamParameter_Parms, CompareType), Z_Construct_UEnum_ELITE_Game_EELEntranceNameplateCommentCompareType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareTeamParameter_Statics::NewProp_TeamId_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareTeamParameter_Statics::NewProp_TeamId = { "TeamId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceNameplateCommentUtilityFunction_eventCompareTeamParameter_Parms, TeamId), Z_Construct_UEnum_ELITE_Game_EELTeamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareTeamParameter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceNameplateCommentUtilityFunction_eventCompareTeamParameter_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareTeamParameter_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((ELEntranceNameplateCommentUtilityFunction_eventCompareTeamParameter_Parms*)Obj)->Success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareTeamParameter_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEntranceNameplateCommentUtilityFunction_eventCompareTeamParameter_Parms), &Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareTeamParameter_Statics::NewProp_Success_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareTeamParameter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEntranceNameplateCommentUtilityFunction_eventCompareTeamParameter_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareTeamParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEntranceNameplateCommentUtilityFunction_eventCompareTeamParameter_Parms), &Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareTeamParameter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareTeamParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareTeamParameter_Statics::NewProp_PlayerData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareTeamParameter_Statics::NewProp_ConditionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareTeamParameter_Statics::NewProp_ConditionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareTeamParameter_Statics::NewProp_CompareType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareTeamParameter_Statics::NewProp_CompareType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareTeamParameter_Statics::NewProp_TeamId_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareTeamParameter_Statics::NewProp_TeamId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareTeamParameter_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareTeamParameter_Statics::NewProp_Success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareTeamParameter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareTeamParameter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEntranceNameplateCommentUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareTeamParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEntranceNameplateCommentUtilityFunction, nullptr, "CompareTeamParameter", nullptr, nullptr, sizeof(ELEntranceNameplateCommentUtilityFunction_eventCompareTeamParameter_Parms), Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareTeamParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareTeamParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareTeamParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareTeamParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareTeamParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareTeamParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareWrestlerParameter_Statics
	{
		struct ELEntranceNameplateCommentUtilityFunction_eventCompareWrestlerParameter_Parms
		{
			const USaveDataObject_PlayerData* PlayerData;
			EELEntranceNameplateCommentConditionType ConditionType;
			EELEntranceNameplateCommentCompareType CompareType;
			EWrestlerID_N WrestlerID;
			FGuid UID;
			FWrestlingSkillParam WrestlingSkillParam;
			int32 Value;
			bool Success;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ConditionType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ConditionType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CompareType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CompareType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WrestlerID_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WrestlerID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlingSkillParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WrestlingSkillParam;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static void NewProp_Success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Success;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareWrestlerParameter_Statics::NewProp_PlayerData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareWrestlerParameter_Statics::NewProp_PlayerData = { "PlayerData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceNameplateCommentUtilityFunction_eventCompareWrestlerParameter_Parms, PlayerData), Z_Construct_UClass_USaveDataObject_PlayerData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareWrestlerParameter_Statics::NewProp_PlayerData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareWrestlerParameter_Statics::NewProp_PlayerData_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareWrestlerParameter_Statics::NewProp_ConditionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareWrestlerParameter_Statics::NewProp_ConditionType = { "ConditionType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceNameplateCommentUtilityFunction_eventCompareWrestlerParameter_Parms, ConditionType), Z_Construct_UEnum_ELITE_Game_EELEntranceNameplateCommentConditionType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareWrestlerParameter_Statics::NewProp_CompareType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareWrestlerParameter_Statics::NewProp_CompareType = { "CompareType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceNameplateCommentUtilityFunction_eventCompareWrestlerParameter_Parms, CompareType), Z_Construct_UEnum_ELITE_Game_EELEntranceNameplateCommentCompareType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareWrestlerParameter_Statics::NewProp_WrestlerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareWrestlerParameter_Statics::NewProp_WrestlerID = { "WrestlerID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceNameplateCommentUtilityFunction_eventCompareWrestlerParameter_Parms, WrestlerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareWrestlerParameter_Statics::NewProp_UID = { "UID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceNameplateCommentUtilityFunction_eventCompareWrestlerParameter_Parms, UID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareWrestlerParameter_Statics::NewProp_WrestlingSkillParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareWrestlerParameter_Statics::NewProp_WrestlingSkillParam = { "WrestlingSkillParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceNameplateCommentUtilityFunction_eventCompareWrestlerParameter_Parms, WrestlingSkillParam), Z_Construct_UScriptStruct_FWrestlingSkillParam, METADATA_PARAMS(Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareWrestlerParameter_Statics::NewProp_WrestlingSkillParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareWrestlerParameter_Statics::NewProp_WrestlingSkillParam_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareWrestlerParameter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceNameplateCommentUtilityFunction_eventCompareWrestlerParameter_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareWrestlerParameter_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((ELEntranceNameplateCommentUtilityFunction_eventCompareWrestlerParameter_Parms*)Obj)->Success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareWrestlerParameter_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEntranceNameplateCommentUtilityFunction_eventCompareWrestlerParameter_Parms), &Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareWrestlerParameter_Statics::NewProp_Success_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareWrestlerParameter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEntranceNameplateCommentUtilityFunction_eventCompareWrestlerParameter_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareWrestlerParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEntranceNameplateCommentUtilityFunction_eventCompareWrestlerParameter_Parms), &Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareWrestlerParameter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareWrestlerParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareWrestlerParameter_Statics::NewProp_PlayerData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareWrestlerParameter_Statics::NewProp_ConditionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareWrestlerParameter_Statics::NewProp_ConditionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareWrestlerParameter_Statics::NewProp_CompareType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareWrestlerParameter_Statics::NewProp_CompareType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareWrestlerParameter_Statics::NewProp_WrestlerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareWrestlerParameter_Statics::NewProp_WrestlerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareWrestlerParameter_Statics::NewProp_UID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareWrestlerParameter_Statics::NewProp_WrestlingSkillParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareWrestlerParameter_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareWrestlerParameter_Statics::NewProp_Success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareWrestlerParameter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareWrestlerParameter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEntranceNameplateCommentUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareWrestlerParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEntranceNameplateCommentUtilityFunction, nullptr, "CompareWrestlerParameter", nullptr, nullptr, sizeof(ELEntranceNameplateCommentUtilityFunction_eventCompareWrestlerParameter_Parms), Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareWrestlerParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareWrestlerParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareWrestlerParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareWrestlerParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareWrestlerParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareWrestlerParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_ConvertReplaceParameterToString_Statics
	{
		struct ELEntranceNameplateCommentUtilityFunction_eventConvertReplaceParameterToString_Parms
		{
			EELEntranceNameplateCommentValueType ValueType;
			FString WrestlerName;
			FString ManagerName;
			FELMoves_Finisher Finisher;
			int32 Value;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ValueType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ValueType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WrestlerName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManagerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ManagerName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Finisher_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Finisher;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_ConvertReplaceParameterToString_Statics::NewProp_ValueType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_ConvertReplaceParameterToString_Statics::NewProp_ValueType = { "ValueType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceNameplateCommentUtilityFunction_eventConvertReplaceParameterToString_Parms, ValueType), Z_Construct_UEnum_ELITE_Game_EELEntranceNameplateCommentValueType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_ConvertReplaceParameterToString_Statics::NewProp_WrestlerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_ConvertReplaceParameterToString_Statics::NewProp_WrestlerName = { "WrestlerName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceNameplateCommentUtilityFunction_eventConvertReplaceParameterToString_Parms, WrestlerName), METADATA_PARAMS(Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_ConvertReplaceParameterToString_Statics::NewProp_WrestlerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_ConvertReplaceParameterToString_Statics::NewProp_WrestlerName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_ConvertReplaceParameterToString_Statics::NewProp_ManagerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_ConvertReplaceParameterToString_Statics::NewProp_ManagerName = { "ManagerName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceNameplateCommentUtilityFunction_eventConvertReplaceParameterToString_Parms, ManagerName), METADATA_PARAMS(Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_ConvertReplaceParameterToString_Statics::NewProp_ManagerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_ConvertReplaceParameterToString_Statics::NewProp_ManagerName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_ConvertReplaceParameterToString_Statics::NewProp_Finisher_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_ConvertReplaceParameterToString_Statics::NewProp_Finisher = { "Finisher", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceNameplateCommentUtilityFunction_eventConvertReplaceParameterToString_Parms, Finisher), Z_Construct_UScriptStruct_FELMoves_Finisher, METADATA_PARAMS(Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_ConvertReplaceParameterToString_Statics::NewProp_Finisher_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_ConvertReplaceParameterToString_Statics::NewProp_Finisher_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_ConvertReplaceParameterToString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceNameplateCommentUtilityFunction_eventConvertReplaceParameterToString_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_ConvertReplaceParameterToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceNameplateCommentUtilityFunction_eventConvertReplaceParameterToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_ConvertReplaceParameterToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_ConvertReplaceParameterToString_Statics::NewProp_ValueType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_ConvertReplaceParameterToString_Statics::NewProp_ValueType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_ConvertReplaceParameterToString_Statics::NewProp_WrestlerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_ConvertReplaceParameterToString_Statics::NewProp_ManagerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_ConvertReplaceParameterToString_Statics::NewProp_Finisher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_ConvertReplaceParameterToString_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_ConvertReplaceParameterToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_ConvertReplaceParameterToString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEntranceNameplateCommentUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_ConvertReplaceParameterToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEntranceNameplateCommentUtilityFunction, nullptr, "ConvertReplaceParameterToString", nullptr, nullptr, sizeof(ELEntranceNameplateCommentUtilityFunction_eventConvertReplaceParameterToString_Parms), Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_ConvertReplaceParameterToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_ConvertReplaceParameterToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_ConvertReplaceParameterToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_ConvertReplaceParameterToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_ConvertReplaceParameterToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_ConvertReplaceParameterToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_GetCachedPlayerDataObject_Statics
	{
		struct ELEntranceNameplateCommentUtilityFunction_eventGetCachedPlayerDataObject_Parms
		{
			USaveDataObject_PlayerData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_GetCachedPlayerDataObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceNameplateCommentUtilityFunction_eventGetCachedPlayerDataObject_Parms, ReturnValue), Z_Construct_UClass_USaveDataObject_PlayerData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_GetCachedPlayerDataObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_GetCachedPlayerDataObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_GetCachedPlayerDataObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEntranceNameplateCommentUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_GetCachedPlayerDataObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEntranceNameplateCommentUtilityFunction, nullptr, "GetCachedPlayerDataObject", nullptr, nullptr, sizeof(ELEntranceNameplateCommentUtilityFunction_eventGetCachedPlayerDataObject_Parms), Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_GetCachedPlayerDataObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_GetCachedPlayerDataObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_GetCachedPlayerDataObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_GetCachedPlayerDataObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_GetCachedPlayerDataObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_GetCachedPlayerDataObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_GetValueForReplaceParameter_Statics
	{
		struct ELEntranceNameplateCommentUtilityFunction_eventGetValueForReplaceParameter_Parms
		{
			EELEntranceNameplateCommentValueType ValueType;
			EWrestlerID_N WrestlerID;
			FGuid UID;
			EWrestlerID_N ManagerID;
			FGuid ManagerUID;
			EELBelt Belt;
			EBodyWeightType WeightType;
			EELTeamID TeamId;
			FELMoves_Finisher Finisher;
			int32 Value;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ValueType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ValueType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WrestlerID_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WrestlerID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ManagerID_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ManagerID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ManagerUID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Belt_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Belt;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WeightType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WeightType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TeamId_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TeamId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Finisher_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Finisher;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_GetValueForReplaceParameter_Statics::NewProp_ValueType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_GetValueForReplaceParameter_Statics::NewProp_ValueType = { "ValueType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceNameplateCommentUtilityFunction_eventGetValueForReplaceParameter_Parms, ValueType), Z_Construct_UEnum_ELITE_Game_EELEntranceNameplateCommentValueType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_GetValueForReplaceParameter_Statics::NewProp_WrestlerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_GetValueForReplaceParameter_Statics::NewProp_WrestlerID = { "WrestlerID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceNameplateCommentUtilityFunction_eventGetValueForReplaceParameter_Parms, WrestlerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_GetValueForReplaceParameter_Statics::NewProp_UID = { "UID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceNameplateCommentUtilityFunction_eventGetValueForReplaceParameter_Parms, UID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_GetValueForReplaceParameter_Statics::NewProp_ManagerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_GetValueForReplaceParameter_Statics::NewProp_ManagerID = { "ManagerID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceNameplateCommentUtilityFunction_eventGetValueForReplaceParameter_Parms, ManagerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_GetValueForReplaceParameter_Statics::NewProp_ManagerUID = { "ManagerUID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceNameplateCommentUtilityFunction_eventGetValueForReplaceParameter_Parms, ManagerUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_GetValueForReplaceParameter_Statics::NewProp_Belt_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_GetValueForReplaceParameter_Statics::NewProp_Belt = { "Belt", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceNameplateCommentUtilityFunction_eventGetValueForReplaceParameter_Parms, Belt), Z_Construct_UEnum_ELITE_Game_EELBelt, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_GetValueForReplaceParameter_Statics::NewProp_WeightType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_GetValueForReplaceParameter_Statics::NewProp_WeightType = { "WeightType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceNameplateCommentUtilityFunction_eventGetValueForReplaceParameter_Parms, WeightType), Z_Construct_UEnum_ELITE_Game_EBodyWeightType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_GetValueForReplaceParameter_Statics::NewProp_TeamId_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_GetValueForReplaceParameter_Statics::NewProp_TeamId = { "TeamId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceNameplateCommentUtilityFunction_eventGetValueForReplaceParameter_Parms, TeamId), Z_Construct_UEnum_ELITE_Game_EELTeamID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_GetValueForReplaceParameter_Statics::NewProp_Finisher_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_GetValueForReplaceParameter_Statics::NewProp_Finisher = { "Finisher", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceNameplateCommentUtilityFunction_eventGetValueForReplaceParameter_Parms, Finisher), Z_Construct_UScriptStruct_FELMoves_Finisher, METADATA_PARAMS(Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_GetValueForReplaceParameter_Statics::NewProp_Finisher_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_GetValueForReplaceParameter_Statics::NewProp_Finisher_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_GetValueForReplaceParameter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceNameplateCommentUtilityFunction_eventGetValueForReplaceParameter_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_GetValueForReplaceParameter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEntranceNameplateCommentUtilityFunction_eventGetValueForReplaceParameter_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_GetValueForReplaceParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEntranceNameplateCommentUtilityFunction_eventGetValueForReplaceParameter_Parms), &Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_GetValueForReplaceParameter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_GetValueForReplaceParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_GetValueForReplaceParameter_Statics::NewProp_ValueType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_GetValueForReplaceParameter_Statics::NewProp_ValueType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_GetValueForReplaceParameter_Statics::NewProp_WrestlerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_GetValueForReplaceParameter_Statics::NewProp_WrestlerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_GetValueForReplaceParameter_Statics::NewProp_UID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_GetValueForReplaceParameter_Statics::NewProp_ManagerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_GetValueForReplaceParameter_Statics::NewProp_ManagerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_GetValueForReplaceParameter_Statics::NewProp_ManagerUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_GetValueForReplaceParameter_Statics::NewProp_Belt_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_GetValueForReplaceParameter_Statics::NewProp_Belt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_GetValueForReplaceParameter_Statics::NewProp_WeightType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_GetValueForReplaceParameter_Statics::NewProp_WeightType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_GetValueForReplaceParameter_Statics::NewProp_TeamId_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_GetValueForReplaceParameter_Statics::NewProp_TeamId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_GetValueForReplaceParameter_Statics::NewProp_Finisher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_GetValueForReplaceParameter_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_GetValueForReplaceParameter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_GetValueForReplaceParameter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEntranceNameplateCommentUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_GetValueForReplaceParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEntranceNameplateCommentUtilityFunction, nullptr, "GetValueForReplaceParameter", nullptr, nullptr, sizeof(ELEntranceNameplateCommentUtilityFunction_eventGetValueForReplaceParameter_Parms), Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_GetValueForReplaceParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_GetValueForReplaceParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_GetValueForReplaceParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_GetValueForReplaceParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_GetValueForReplaceParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_GetValueForReplaceParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELEntranceNameplateCommentUtilityFunction_NoRegister()
	{
		return UELEntranceNameplateCommentUtilityFunction::StaticClass();
	}
	struct Z_Construct_UClass_UELEntranceNameplateCommentUtilityFunction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELEntranceNameplateCommentUtilityFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELEntranceNameplateCommentUtilityFunction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareTeamParameter, "CompareTeamParameter" }, // 2178308397
		{ &Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_CompareWrestlerParameter, "CompareWrestlerParameter" }, // 4061483243
		{ &Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_ConvertReplaceParameterToString, "ConvertReplaceParameterToString" }, // 2200634975
		{ &Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_GetCachedPlayerDataObject, "GetCachedPlayerDataObject" }, // 933012687
		{ &Z_Construct_UFunction_UELEntranceNameplateCommentUtilityFunction_GetValueForReplaceParameter, "GetValueForReplaceParameter" }, // 1385498550
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELEntranceNameplateCommentUtilityFunction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELEntranceNameplateCommentUtilityFunction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELEntranceNameplateCommentUtilityFunction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELEntranceNameplateCommentUtilityFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELEntranceNameplateCommentUtilityFunction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELEntranceNameplateCommentUtilityFunction_Statics::ClassParams = {
		&UELEntranceNameplateCommentUtilityFunction::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UELEntranceNameplateCommentUtilityFunction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELEntranceNameplateCommentUtilityFunction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELEntranceNameplateCommentUtilityFunction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELEntranceNameplateCommentUtilityFunction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELEntranceNameplateCommentUtilityFunction, 2068623087);
	template<> ABP_200508_API UClass* StaticClass<UELEntranceNameplateCommentUtilityFunction>()
	{
		return UELEntranceNameplateCommentUtilityFunction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELEntranceNameplateCommentUtilityFunction(Z_Construct_UClass_UELEntranceNameplateCommentUtilityFunction, &UELEntranceNameplateCommentUtilityFunction::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELEntranceNameplateCommentUtilityFunction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELEntranceNameplateCommentUtilityFunction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
