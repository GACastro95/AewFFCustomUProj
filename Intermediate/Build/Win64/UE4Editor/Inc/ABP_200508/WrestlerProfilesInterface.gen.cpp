// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/WrestlerProfilesInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWrestlerProfilesInterface() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UWrestlerProfilesInterface_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UWrestlerProfilesInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EAbilityScoreType();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EBodyType();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMoves();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EFanReaction();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMoves_Finisher();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FHomeTownID();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EReversalMotionType();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FWrestlerSetupParam();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ESystemMotionType();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
// End Cross Module References
	DEFINE_FUNCTION(IWrestlerProfilesInterface::execGetAbilityScore)
	{
		P_GET_ENUM(EAbilityScoreType,Z_Param_AbilityScoreType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAbilityScore_Implementation(EAbilityScoreType(Z_Param_AbilityScoreType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IWrestlerProfilesInterface::execGetBodyType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EBodyType*)Z_Param__Result=P_THIS->GetBodyType_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IWrestlerProfilesInterface::execGetDefaultMoves)
	{
		P_GET_STRUCT_REF(FELMoves,Z_Param_Out_Out);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetDefaultMoves_Implementation(Z_Param_Out_Out);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IWrestlerProfilesInterface::execGetFanReaction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EFanReaction*)Z_Param__Result=P_THIS->GetFanReaction_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IWrestlerProfilesInterface::execGetFavoriteProps)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetFavoriteProps_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IWrestlerProfilesInterface::execGetFightStyle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetFightStyle_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IWrestlerProfilesInterface::execGetFinisherMoves)
	{
		P_GET_STRUCT_REF(FELMoves_Finisher,Z_Param_Out_Out);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetFinisherMoves_Implementation(Z_Param_Out_Out);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IWrestlerProfilesInterface::execGetHomeTownID)
	{
		P_GET_STRUCT_REF(FHomeTownID,Z_Param_Out_Out);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetHomeTownID_Implementation(Z_Param_Out_Out);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IWrestlerProfilesInterface::execGetHomeTownText)
	{
		P_GET_UBOOL(Z_Param_bUpper);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetHomeTownText_Implementation(Z_Param_bUpper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IWrestlerProfilesInterface::execGetHudTexture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture**)Z_Param__Result=P_THIS->GetHudTexture_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IWrestlerProfilesInterface::execGetReversalMotionType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EReversalMotionType*)Z_Param__Result=P_THIS->GetReversalMotionType_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IWrestlerProfilesInterface::execGetSetupParam)
	{
		P_GET_STRUCT_REF(FWrestlerSetupParam,Z_Param_Out_Out);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetSetupParam_Implementation(Z_Param_Out_Out);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IWrestlerProfilesInterface::execGetSignatureMoves)
	{
		P_GET_STRUCT_REF(FELMoves_Finisher,Z_Param_Out_Out);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetSignatureMoves_Implementation(Z_Param_Out_Out);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IWrestlerProfilesInterface::execGetSocialNetworkName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetSocialNetworkName_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IWrestlerProfilesInterface::execGetSystemMotionType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESystemMotionType*)Z_Param__Result=P_THIS->GetSystemMotionType_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IWrestlerProfilesInterface::execGetWrestlerID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EWrestlerID_N*)Z_Param__Result=P_THIS->GetWrestlerID_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IWrestlerProfilesInterface::execGetWrestlerName)
	{
		P_GET_UBOOL(Z_Param_bUpper);
		P_GET_UBOOL(Z_Param_bMultiLined);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetWrestlerName_Implementation(Z_Param_bUpper,Z_Param_bMultiLined);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IWrestlerProfilesInterface::execHasActionSkill)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ActionSkillID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasActionSkill_Implementation(Z_Param_ActionSkillID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IWrestlerProfilesInterface::execHasPassiveSkill)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PassiveSkillID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasPassiveSkill_Implementation(Z_Param_PassiveSkillID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IWrestlerProfilesInterface::execSetup)
	{
		P_GET_STRUCT_REF(FWrestlerSetupParam,Z_Param_Out_NewParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Setup_Implementation(Z_Param_Out_NewParam);
		P_NATIVE_END;
	}
	int32 IWrestlerProfilesInterface::GetAbilityScore(const EAbilityScoreType AbilityScoreType) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetAbilityScore instead.");
		WrestlerProfilesInterface_eventGetAbilityScore_Parms Parms;
		return Parms.ReturnValue;
	}
	EBodyType IWrestlerProfilesInterface::GetBodyType() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetBodyType instead.");
		WrestlerProfilesInterface_eventGetBodyType_Parms Parms;
		return Parms.ReturnValue;
	}
	void IWrestlerProfilesInterface::GetDefaultMoves(FELMoves& Out) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetDefaultMoves instead.");
	}
	EFanReaction IWrestlerProfilesInterface::GetFanReaction() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetFanReaction instead.");
		WrestlerProfilesInterface_eventGetFanReaction_Parms Parms;
		return Parms.ReturnValue;
	}
	int32 IWrestlerProfilesInterface::GetFavoriteProps() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetFavoriteProps instead.");
		WrestlerProfilesInterface_eventGetFavoriteProps_Parms Parms;
		return Parms.ReturnValue;
	}
	int32 IWrestlerProfilesInterface::GetFightStyle() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetFightStyle instead.");
		WrestlerProfilesInterface_eventGetFightStyle_Parms Parms;
		return Parms.ReturnValue;
	}
	void IWrestlerProfilesInterface::GetFinisherMoves(FELMoves_Finisher& Out) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetFinisherMoves instead.");
	}
	void IWrestlerProfilesInterface::GetHomeTownID(FHomeTownID& Out) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetHomeTownID instead.");
	}
	FText IWrestlerProfilesInterface::GetHomeTownText(bool bUpper) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetHomeTownText instead.");
		WrestlerProfilesInterface_eventGetHomeTownText_Parms Parms;
		return Parms.ReturnValue;
	}
	UTexture* IWrestlerProfilesInterface::GetHudTexture() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetHudTexture instead.");
		WrestlerProfilesInterface_eventGetHudTexture_Parms Parms;
		return Parms.ReturnValue;
	}
	EReversalMotionType IWrestlerProfilesInterface::GetReversalMotionType() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetReversalMotionType instead.");
		WrestlerProfilesInterface_eventGetReversalMotionType_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IWrestlerProfilesInterface::GetSetupParam(FWrestlerSetupParam& Out) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetSetupParam instead.");
		WrestlerProfilesInterface_eventGetSetupParam_Parms Parms;
		return Parms.ReturnValue;
	}
	void IWrestlerProfilesInterface::GetSignatureMoves(FELMoves_Finisher& Out) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetSignatureMoves instead.");
	}
	FText IWrestlerProfilesInterface::GetSocialNetworkName() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetSocialNetworkName instead.");
		WrestlerProfilesInterface_eventGetSocialNetworkName_Parms Parms;
		return Parms.ReturnValue;
	}
	ESystemMotionType IWrestlerProfilesInterface::GetSystemMotionType() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetSystemMotionType instead.");
		WrestlerProfilesInterface_eventGetSystemMotionType_Parms Parms;
		return Parms.ReturnValue;
	}
	EWrestlerID_N IWrestlerProfilesInterface::GetWrestlerID() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetWrestlerID instead.");
		WrestlerProfilesInterface_eventGetWrestlerID_Parms Parms;
		return Parms.ReturnValue;
	}
	FText IWrestlerProfilesInterface::GetWrestlerName(bool bUpper, bool bMultiLined) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetWrestlerName instead.");
		WrestlerProfilesInterface_eventGetWrestlerName_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IWrestlerProfilesInterface::HasActionSkill(const int32 ActionSkillID) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_HasActionSkill instead.");
		WrestlerProfilesInterface_eventHasActionSkill_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IWrestlerProfilesInterface::HasPassiveSkill(const int32 PassiveSkillID) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_HasPassiveSkill instead.");
		WrestlerProfilesInterface_eventHasPassiveSkill_Parms Parms;
		return Parms.ReturnValue;
	}
	void IWrestlerProfilesInterface::Setup(FWrestlerSetupParam const& NewParam)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Setup instead.");
	}
	void UWrestlerProfilesInterface::StaticRegisterNativesUWrestlerProfilesInterface()
	{
		UClass* Class = UWrestlerProfilesInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAbilityScore", &IWrestlerProfilesInterface::execGetAbilityScore },
			{ "GetBodyType", &IWrestlerProfilesInterface::execGetBodyType },
			{ "GetDefaultMoves", &IWrestlerProfilesInterface::execGetDefaultMoves },
			{ "GetFanReaction", &IWrestlerProfilesInterface::execGetFanReaction },
			{ "GetFavoriteProps", &IWrestlerProfilesInterface::execGetFavoriteProps },
			{ "GetFightStyle", &IWrestlerProfilesInterface::execGetFightStyle },
			{ "GetFinisherMoves", &IWrestlerProfilesInterface::execGetFinisherMoves },
			{ "GetHomeTownID", &IWrestlerProfilesInterface::execGetHomeTownID },
			{ "GetHomeTownText", &IWrestlerProfilesInterface::execGetHomeTownText },
			{ "GetHudTexture", &IWrestlerProfilesInterface::execGetHudTexture },
			{ "GetReversalMotionType", &IWrestlerProfilesInterface::execGetReversalMotionType },
			{ "GetSetupParam", &IWrestlerProfilesInterface::execGetSetupParam },
			{ "GetSignatureMoves", &IWrestlerProfilesInterface::execGetSignatureMoves },
			{ "GetSocialNetworkName", &IWrestlerProfilesInterface::execGetSocialNetworkName },
			{ "GetSystemMotionType", &IWrestlerProfilesInterface::execGetSystemMotionType },
			{ "GetWrestlerID", &IWrestlerProfilesInterface::execGetWrestlerID },
			{ "GetWrestlerName", &IWrestlerProfilesInterface::execGetWrestlerName },
			{ "HasActionSkill", &IWrestlerProfilesInterface::execHasActionSkill },
			{ "HasPassiveSkill", &IWrestlerProfilesInterface::execHasPassiveSkill },
			{ "Setup", &IWrestlerProfilesInterface::execSetup },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWrestlerProfilesInterface_GetAbilityScore_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AbilityScoreType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityScoreType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AbilityScoreType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWrestlerProfilesInterface_GetAbilityScore_Statics::NewProp_AbilityScoreType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrestlerProfilesInterface_GetAbilityScore_Statics::NewProp_AbilityScoreType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWrestlerProfilesInterface_GetAbilityScore_Statics::NewProp_AbilityScoreType = { "AbilityScoreType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WrestlerProfilesInterface_eventGetAbilityScore_Parms, AbilityScoreType), Z_Construct_UEnum_ELITE_Game_EAbilityScoreType, METADATA_PARAMS(Z_Construct_UFunction_UWrestlerProfilesInterface_GetAbilityScore_Statics::NewProp_AbilityScoreType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerProfilesInterface_GetAbilityScore_Statics::NewProp_AbilityScoreType_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWrestlerProfilesInterface_GetAbilityScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WrestlerProfilesInterface_eventGetAbilityScore_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWrestlerProfilesInterface_GetAbilityScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerProfilesInterface_GetAbilityScore_Statics::NewProp_AbilityScoreType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerProfilesInterface_GetAbilityScore_Statics::NewProp_AbilityScoreType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerProfilesInterface_GetAbilityScore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrestlerProfilesInterface_GetAbilityScore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WrestlerProfilesInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWrestlerProfilesInterface_GetAbilityScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrestlerProfilesInterface, nullptr, "GetAbilityScore", nullptr, nullptr, sizeof(WrestlerProfilesInterface_eventGetAbilityScore_Parms), Z_Construct_UFunction_UWrestlerProfilesInterface_GetAbilityScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerProfilesInterface_GetAbilityScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWrestlerProfilesInterface_GetAbilityScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerProfilesInterface_GetAbilityScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWrestlerProfilesInterface_GetAbilityScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWrestlerProfilesInterface_GetAbilityScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWrestlerProfilesInterface_GetBodyType_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWrestlerProfilesInterface_GetBodyType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWrestlerProfilesInterface_GetBodyType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WrestlerProfilesInterface_eventGetBodyType_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Game_EBodyType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWrestlerProfilesInterface_GetBodyType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerProfilesInterface_GetBodyType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerProfilesInterface_GetBodyType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrestlerProfilesInterface_GetBodyType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WrestlerProfilesInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWrestlerProfilesInterface_GetBodyType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrestlerProfilesInterface, nullptr, "GetBodyType", nullptr, nullptr, sizeof(WrestlerProfilesInterface_eventGetBodyType_Parms), Z_Construct_UFunction_UWrestlerProfilesInterface_GetBodyType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerProfilesInterface_GetBodyType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWrestlerProfilesInterface_GetBodyType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerProfilesInterface_GetBodyType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWrestlerProfilesInterface_GetBodyType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWrestlerProfilesInterface_GetBodyType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWrestlerProfilesInterface_GetDefaultMoves_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Out;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWrestlerProfilesInterface_GetDefaultMoves_Statics::NewProp_Out = { "Out", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WrestlerProfilesInterface_eventGetDefaultMoves_Parms, Out), Z_Construct_UScriptStruct_FELMoves, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWrestlerProfilesInterface_GetDefaultMoves_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerProfilesInterface_GetDefaultMoves_Statics::NewProp_Out,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrestlerProfilesInterface_GetDefaultMoves_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WrestlerProfilesInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWrestlerProfilesInterface_GetDefaultMoves_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrestlerProfilesInterface, nullptr, "GetDefaultMoves", nullptr, nullptr, sizeof(WrestlerProfilesInterface_eventGetDefaultMoves_Parms), Z_Construct_UFunction_UWrestlerProfilesInterface_GetDefaultMoves_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerProfilesInterface_GetDefaultMoves_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWrestlerProfilesInterface_GetDefaultMoves_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerProfilesInterface_GetDefaultMoves_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWrestlerProfilesInterface_GetDefaultMoves()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWrestlerProfilesInterface_GetDefaultMoves_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWrestlerProfilesInterface_GetFanReaction_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWrestlerProfilesInterface_GetFanReaction_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWrestlerProfilesInterface_GetFanReaction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WrestlerProfilesInterface_eventGetFanReaction_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Game_EFanReaction, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWrestlerProfilesInterface_GetFanReaction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerProfilesInterface_GetFanReaction_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerProfilesInterface_GetFanReaction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrestlerProfilesInterface_GetFanReaction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WrestlerProfilesInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWrestlerProfilesInterface_GetFanReaction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrestlerProfilesInterface, nullptr, "GetFanReaction", nullptr, nullptr, sizeof(WrestlerProfilesInterface_eventGetFanReaction_Parms), Z_Construct_UFunction_UWrestlerProfilesInterface_GetFanReaction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerProfilesInterface_GetFanReaction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWrestlerProfilesInterface_GetFanReaction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerProfilesInterface_GetFanReaction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWrestlerProfilesInterface_GetFanReaction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWrestlerProfilesInterface_GetFanReaction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWrestlerProfilesInterface_GetFavoriteProps_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWrestlerProfilesInterface_GetFavoriteProps_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WrestlerProfilesInterface_eventGetFavoriteProps_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWrestlerProfilesInterface_GetFavoriteProps_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerProfilesInterface_GetFavoriteProps_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrestlerProfilesInterface_GetFavoriteProps_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WrestlerProfilesInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWrestlerProfilesInterface_GetFavoriteProps_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrestlerProfilesInterface, nullptr, "GetFavoriteProps", nullptr, nullptr, sizeof(WrestlerProfilesInterface_eventGetFavoriteProps_Parms), Z_Construct_UFunction_UWrestlerProfilesInterface_GetFavoriteProps_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerProfilesInterface_GetFavoriteProps_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWrestlerProfilesInterface_GetFavoriteProps_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerProfilesInterface_GetFavoriteProps_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWrestlerProfilesInterface_GetFavoriteProps()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWrestlerProfilesInterface_GetFavoriteProps_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWrestlerProfilesInterface_GetFightStyle_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWrestlerProfilesInterface_GetFightStyle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WrestlerProfilesInterface_eventGetFightStyle_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWrestlerProfilesInterface_GetFightStyle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerProfilesInterface_GetFightStyle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrestlerProfilesInterface_GetFightStyle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WrestlerProfilesInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWrestlerProfilesInterface_GetFightStyle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrestlerProfilesInterface, nullptr, "GetFightStyle", nullptr, nullptr, sizeof(WrestlerProfilesInterface_eventGetFightStyle_Parms), Z_Construct_UFunction_UWrestlerProfilesInterface_GetFightStyle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerProfilesInterface_GetFightStyle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWrestlerProfilesInterface_GetFightStyle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerProfilesInterface_GetFightStyle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWrestlerProfilesInterface_GetFightStyle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWrestlerProfilesInterface_GetFightStyle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWrestlerProfilesInterface_GetFinisherMoves_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Out;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWrestlerProfilesInterface_GetFinisherMoves_Statics::NewProp_Out = { "Out", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WrestlerProfilesInterface_eventGetFinisherMoves_Parms, Out), Z_Construct_UScriptStruct_FELMoves_Finisher, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWrestlerProfilesInterface_GetFinisherMoves_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerProfilesInterface_GetFinisherMoves_Statics::NewProp_Out,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrestlerProfilesInterface_GetFinisherMoves_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WrestlerProfilesInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWrestlerProfilesInterface_GetFinisherMoves_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrestlerProfilesInterface, nullptr, "GetFinisherMoves", nullptr, nullptr, sizeof(WrestlerProfilesInterface_eventGetFinisherMoves_Parms), Z_Construct_UFunction_UWrestlerProfilesInterface_GetFinisherMoves_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerProfilesInterface_GetFinisherMoves_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWrestlerProfilesInterface_GetFinisherMoves_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerProfilesInterface_GetFinisherMoves_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWrestlerProfilesInterface_GetFinisherMoves()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWrestlerProfilesInterface_GetFinisherMoves_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWrestlerProfilesInterface_GetHomeTownID_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Out;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWrestlerProfilesInterface_GetHomeTownID_Statics::NewProp_Out = { "Out", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WrestlerProfilesInterface_eventGetHomeTownID_Parms, Out), Z_Construct_UScriptStruct_FHomeTownID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWrestlerProfilesInterface_GetHomeTownID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerProfilesInterface_GetHomeTownID_Statics::NewProp_Out,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrestlerProfilesInterface_GetHomeTownID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WrestlerProfilesInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWrestlerProfilesInterface_GetHomeTownID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrestlerProfilesInterface, nullptr, "GetHomeTownID", nullptr, nullptr, sizeof(WrestlerProfilesInterface_eventGetHomeTownID_Parms), Z_Construct_UFunction_UWrestlerProfilesInterface_GetHomeTownID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerProfilesInterface_GetHomeTownID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWrestlerProfilesInterface_GetHomeTownID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerProfilesInterface_GetHomeTownID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWrestlerProfilesInterface_GetHomeTownID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWrestlerProfilesInterface_GetHomeTownID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWrestlerProfilesInterface_GetHomeTownText_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUpper_MetaData[];
#endif
		static void NewProp_bUpper_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpper;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrestlerProfilesInterface_GetHomeTownText_Statics::NewProp_bUpper_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UWrestlerProfilesInterface_GetHomeTownText_Statics::NewProp_bUpper_SetBit(void* Obj)
	{
		((WrestlerProfilesInterface_eventGetHomeTownText_Parms*)Obj)->bUpper = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWrestlerProfilesInterface_GetHomeTownText_Statics::NewProp_bUpper = { "bUpper", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WrestlerProfilesInterface_eventGetHomeTownText_Parms), &Z_Construct_UFunction_UWrestlerProfilesInterface_GetHomeTownText_Statics::NewProp_bUpper_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UWrestlerProfilesInterface_GetHomeTownText_Statics::NewProp_bUpper_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerProfilesInterface_GetHomeTownText_Statics::NewProp_bUpper_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UWrestlerProfilesInterface_GetHomeTownText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WrestlerProfilesInterface_eventGetHomeTownText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWrestlerProfilesInterface_GetHomeTownText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerProfilesInterface_GetHomeTownText_Statics::NewProp_bUpper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerProfilesInterface_GetHomeTownText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrestlerProfilesInterface_GetHomeTownText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WrestlerProfilesInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWrestlerProfilesInterface_GetHomeTownText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrestlerProfilesInterface, nullptr, "GetHomeTownText", nullptr, nullptr, sizeof(WrestlerProfilesInterface_eventGetHomeTownText_Parms), Z_Construct_UFunction_UWrestlerProfilesInterface_GetHomeTownText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerProfilesInterface_GetHomeTownText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWrestlerProfilesInterface_GetHomeTownText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerProfilesInterface_GetHomeTownText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWrestlerProfilesInterface_GetHomeTownText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWrestlerProfilesInterface_GetHomeTownText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWrestlerProfilesInterface_GetHudTexture_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWrestlerProfilesInterface_GetHudTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WrestlerProfilesInterface_eventGetHudTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWrestlerProfilesInterface_GetHudTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerProfilesInterface_GetHudTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrestlerProfilesInterface_GetHudTexture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WrestlerProfilesInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWrestlerProfilesInterface_GetHudTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrestlerProfilesInterface, nullptr, "GetHudTexture", nullptr, nullptr, sizeof(WrestlerProfilesInterface_eventGetHudTexture_Parms), Z_Construct_UFunction_UWrestlerProfilesInterface_GetHudTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerProfilesInterface_GetHudTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWrestlerProfilesInterface_GetHudTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerProfilesInterface_GetHudTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWrestlerProfilesInterface_GetHudTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWrestlerProfilesInterface_GetHudTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWrestlerProfilesInterface_GetReversalMotionType_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWrestlerProfilesInterface_GetReversalMotionType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWrestlerProfilesInterface_GetReversalMotionType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WrestlerProfilesInterface_eventGetReversalMotionType_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Game_EReversalMotionType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWrestlerProfilesInterface_GetReversalMotionType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerProfilesInterface_GetReversalMotionType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerProfilesInterface_GetReversalMotionType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrestlerProfilesInterface_GetReversalMotionType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WrestlerProfilesInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWrestlerProfilesInterface_GetReversalMotionType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrestlerProfilesInterface, nullptr, "GetReversalMotionType", nullptr, nullptr, sizeof(WrestlerProfilesInterface_eventGetReversalMotionType_Parms), Z_Construct_UFunction_UWrestlerProfilesInterface_GetReversalMotionType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerProfilesInterface_GetReversalMotionType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWrestlerProfilesInterface_GetReversalMotionType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerProfilesInterface_GetReversalMotionType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWrestlerProfilesInterface_GetReversalMotionType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWrestlerProfilesInterface_GetReversalMotionType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWrestlerProfilesInterface_GetSetupParam_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Out;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWrestlerProfilesInterface_GetSetupParam_Statics::NewProp_Out = { "Out", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WrestlerProfilesInterface_eventGetSetupParam_Parms, Out), Z_Construct_UScriptStruct_FWrestlerSetupParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWrestlerProfilesInterface_GetSetupParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WrestlerProfilesInterface_eventGetSetupParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWrestlerProfilesInterface_GetSetupParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WrestlerProfilesInterface_eventGetSetupParam_Parms), &Z_Construct_UFunction_UWrestlerProfilesInterface_GetSetupParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWrestlerProfilesInterface_GetSetupParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerProfilesInterface_GetSetupParam_Statics::NewProp_Out,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerProfilesInterface_GetSetupParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrestlerProfilesInterface_GetSetupParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WrestlerProfilesInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWrestlerProfilesInterface_GetSetupParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrestlerProfilesInterface, nullptr, "GetSetupParam", nullptr, nullptr, sizeof(WrestlerProfilesInterface_eventGetSetupParam_Parms), Z_Construct_UFunction_UWrestlerProfilesInterface_GetSetupParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerProfilesInterface_GetSetupParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWrestlerProfilesInterface_GetSetupParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerProfilesInterface_GetSetupParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWrestlerProfilesInterface_GetSetupParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWrestlerProfilesInterface_GetSetupParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWrestlerProfilesInterface_GetSignatureMoves_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Out;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWrestlerProfilesInterface_GetSignatureMoves_Statics::NewProp_Out = { "Out", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WrestlerProfilesInterface_eventGetSignatureMoves_Parms, Out), Z_Construct_UScriptStruct_FELMoves_Finisher, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWrestlerProfilesInterface_GetSignatureMoves_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerProfilesInterface_GetSignatureMoves_Statics::NewProp_Out,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrestlerProfilesInterface_GetSignatureMoves_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WrestlerProfilesInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWrestlerProfilesInterface_GetSignatureMoves_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrestlerProfilesInterface, nullptr, "GetSignatureMoves", nullptr, nullptr, sizeof(WrestlerProfilesInterface_eventGetSignatureMoves_Parms), Z_Construct_UFunction_UWrestlerProfilesInterface_GetSignatureMoves_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerProfilesInterface_GetSignatureMoves_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWrestlerProfilesInterface_GetSignatureMoves_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerProfilesInterface_GetSignatureMoves_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWrestlerProfilesInterface_GetSignatureMoves()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWrestlerProfilesInterface_GetSignatureMoves_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWrestlerProfilesInterface_GetSocialNetworkName_Statics
	{
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UWrestlerProfilesInterface_GetSocialNetworkName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WrestlerProfilesInterface_eventGetSocialNetworkName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWrestlerProfilesInterface_GetSocialNetworkName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerProfilesInterface_GetSocialNetworkName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrestlerProfilesInterface_GetSocialNetworkName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WrestlerProfilesInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWrestlerProfilesInterface_GetSocialNetworkName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrestlerProfilesInterface, nullptr, "GetSocialNetworkName", nullptr, nullptr, sizeof(WrestlerProfilesInterface_eventGetSocialNetworkName_Parms), Z_Construct_UFunction_UWrestlerProfilesInterface_GetSocialNetworkName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerProfilesInterface_GetSocialNetworkName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWrestlerProfilesInterface_GetSocialNetworkName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerProfilesInterface_GetSocialNetworkName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWrestlerProfilesInterface_GetSocialNetworkName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWrestlerProfilesInterface_GetSocialNetworkName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWrestlerProfilesInterface_GetSystemMotionType_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWrestlerProfilesInterface_GetSystemMotionType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWrestlerProfilesInterface_GetSystemMotionType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WrestlerProfilesInterface_eventGetSystemMotionType_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Game_ESystemMotionType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWrestlerProfilesInterface_GetSystemMotionType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerProfilesInterface_GetSystemMotionType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerProfilesInterface_GetSystemMotionType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrestlerProfilesInterface_GetSystemMotionType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WrestlerProfilesInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWrestlerProfilesInterface_GetSystemMotionType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrestlerProfilesInterface, nullptr, "GetSystemMotionType", nullptr, nullptr, sizeof(WrestlerProfilesInterface_eventGetSystemMotionType_Parms), Z_Construct_UFunction_UWrestlerProfilesInterface_GetSystemMotionType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerProfilesInterface_GetSystemMotionType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWrestlerProfilesInterface_GetSystemMotionType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerProfilesInterface_GetSystemMotionType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWrestlerProfilesInterface_GetSystemMotionType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWrestlerProfilesInterface_GetSystemMotionType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWrestlerProfilesInterface_GetWrestlerID_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWrestlerProfilesInterface_GetWrestlerID_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWrestlerProfilesInterface_GetWrestlerID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WrestlerProfilesInterface_eventGetWrestlerID_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWrestlerProfilesInterface_GetWrestlerID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerProfilesInterface_GetWrestlerID_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerProfilesInterface_GetWrestlerID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrestlerProfilesInterface_GetWrestlerID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WrestlerProfilesInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWrestlerProfilesInterface_GetWrestlerID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrestlerProfilesInterface, nullptr, "GetWrestlerID", nullptr, nullptr, sizeof(WrestlerProfilesInterface_eventGetWrestlerID_Parms), Z_Construct_UFunction_UWrestlerProfilesInterface_GetWrestlerID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerProfilesInterface_GetWrestlerID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWrestlerProfilesInterface_GetWrestlerID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerProfilesInterface_GetWrestlerID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWrestlerProfilesInterface_GetWrestlerID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWrestlerProfilesInterface_GetWrestlerID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWrestlerProfilesInterface_GetWrestlerName_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUpper_MetaData[];
#endif
		static void NewProp_bUpper_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMultiLined_MetaData[];
#endif
		static void NewProp_bMultiLined_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMultiLined;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrestlerProfilesInterface_GetWrestlerName_Statics::NewProp_bUpper_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UWrestlerProfilesInterface_GetWrestlerName_Statics::NewProp_bUpper_SetBit(void* Obj)
	{
		((WrestlerProfilesInterface_eventGetWrestlerName_Parms*)Obj)->bUpper = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWrestlerProfilesInterface_GetWrestlerName_Statics::NewProp_bUpper = { "bUpper", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WrestlerProfilesInterface_eventGetWrestlerName_Parms), &Z_Construct_UFunction_UWrestlerProfilesInterface_GetWrestlerName_Statics::NewProp_bUpper_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UWrestlerProfilesInterface_GetWrestlerName_Statics::NewProp_bUpper_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerProfilesInterface_GetWrestlerName_Statics::NewProp_bUpper_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrestlerProfilesInterface_GetWrestlerName_Statics::NewProp_bMultiLined_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UWrestlerProfilesInterface_GetWrestlerName_Statics::NewProp_bMultiLined_SetBit(void* Obj)
	{
		((WrestlerProfilesInterface_eventGetWrestlerName_Parms*)Obj)->bMultiLined = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWrestlerProfilesInterface_GetWrestlerName_Statics::NewProp_bMultiLined = { "bMultiLined", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WrestlerProfilesInterface_eventGetWrestlerName_Parms), &Z_Construct_UFunction_UWrestlerProfilesInterface_GetWrestlerName_Statics::NewProp_bMultiLined_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UWrestlerProfilesInterface_GetWrestlerName_Statics::NewProp_bMultiLined_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerProfilesInterface_GetWrestlerName_Statics::NewProp_bMultiLined_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UWrestlerProfilesInterface_GetWrestlerName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WrestlerProfilesInterface_eventGetWrestlerName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWrestlerProfilesInterface_GetWrestlerName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerProfilesInterface_GetWrestlerName_Statics::NewProp_bUpper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerProfilesInterface_GetWrestlerName_Statics::NewProp_bMultiLined,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerProfilesInterface_GetWrestlerName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrestlerProfilesInterface_GetWrestlerName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WrestlerProfilesInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWrestlerProfilesInterface_GetWrestlerName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrestlerProfilesInterface, nullptr, "GetWrestlerName", nullptr, nullptr, sizeof(WrestlerProfilesInterface_eventGetWrestlerName_Parms), Z_Construct_UFunction_UWrestlerProfilesInterface_GetWrestlerName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerProfilesInterface_GetWrestlerName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWrestlerProfilesInterface_GetWrestlerName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerProfilesInterface_GetWrestlerName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWrestlerProfilesInterface_GetWrestlerName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWrestlerProfilesInterface_GetWrestlerName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWrestlerProfilesInterface_HasActionSkill_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionSkillID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ActionSkillID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrestlerProfilesInterface_HasActionSkill_Statics::NewProp_ActionSkillID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWrestlerProfilesInterface_HasActionSkill_Statics::NewProp_ActionSkillID = { "ActionSkillID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WrestlerProfilesInterface_eventHasActionSkill_Parms, ActionSkillID), METADATA_PARAMS(Z_Construct_UFunction_UWrestlerProfilesInterface_HasActionSkill_Statics::NewProp_ActionSkillID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerProfilesInterface_HasActionSkill_Statics::NewProp_ActionSkillID_MetaData)) };
	void Z_Construct_UFunction_UWrestlerProfilesInterface_HasActionSkill_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WrestlerProfilesInterface_eventHasActionSkill_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWrestlerProfilesInterface_HasActionSkill_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WrestlerProfilesInterface_eventHasActionSkill_Parms), &Z_Construct_UFunction_UWrestlerProfilesInterface_HasActionSkill_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWrestlerProfilesInterface_HasActionSkill_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerProfilesInterface_HasActionSkill_Statics::NewProp_ActionSkillID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerProfilesInterface_HasActionSkill_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrestlerProfilesInterface_HasActionSkill_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WrestlerProfilesInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWrestlerProfilesInterface_HasActionSkill_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrestlerProfilesInterface, nullptr, "HasActionSkill", nullptr, nullptr, sizeof(WrestlerProfilesInterface_eventHasActionSkill_Parms), Z_Construct_UFunction_UWrestlerProfilesInterface_HasActionSkill_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerProfilesInterface_HasActionSkill_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWrestlerProfilesInterface_HasActionSkill_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerProfilesInterface_HasActionSkill_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWrestlerProfilesInterface_HasActionSkill()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWrestlerProfilesInterface_HasActionSkill_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWrestlerProfilesInterface_HasPassiveSkill_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PassiveSkillID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PassiveSkillID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrestlerProfilesInterface_HasPassiveSkill_Statics::NewProp_PassiveSkillID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWrestlerProfilesInterface_HasPassiveSkill_Statics::NewProp_PassiveSkillID = { "PassiveSkillID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WrestlerProfilesInterface_eventHasPassiveSkill_Parms, PassiveSkillID), METADATA_PARAMS(Z_Construct_UFunction_UWrestlerProfilesInterface_HasPassiveSkill_Statics::NewProp_PassiveSkillID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerProfilesInterface_HasPassiveSkill_Statics::NewProp_PassiveSkillID_MetaData)) };
	void Z_Construct_UFunction_UWrestlerProfilesInterface_HasPassiveSkill_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WrestlerProfilesInterface_eventHasPassiveSkill_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWrestlerProfilesInterface_HasPassiveSkill_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WrestlerProfilesInterface_eventHasPassiveSkill_Parms), &Z_Construct_UFunction_UWrestlerProfilesInterface_HasPassiveSkill_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWrestlerProfilesInterface_HasPassiveSkill_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerProfilesInterface_HasPassiveSkill_Statics::NewProp_PassiveSkillID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerProfilesInterface_HasPassiveSkill_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrestlerProfilesInterface_HasPassiveSkill_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WrestlerProfilesInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWrestlerProfilesInterface_HasPassiveSkill_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrestlerProfilesInterface, nullptr, "HasPassiveSkill", nullptr, nullptr, sizeof(WrestlerProfilesInterface_eventHasPassiveSkill_Parms), Z_Construct_UFunction_UWrestlerProfilesInterface_HasPassiveSkill_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerProfilesInterface_HasPassiveSkill_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWrestlerProfilesInterface_HasPassiveSkill_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerProfilesInterface_HasPassiveSkill_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWrestlerProfilesInterface_HasPassiveSkill()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWrestlerProfilesInterface_HasPassiveSkill_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWrestlerProfilesInterface_Setup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewParam;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrestlerProfilesInterface_Setup_Statics::NewProp_NewParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWrestlerProfilesInterface_Setup_Statics::NewProp_NewParam = { "NewParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WrestlerProfilesInterface_eventSetup_Parms, NewParam), Z_Construct_UScriptStruct_FWrestlerSetupParam, METADATA_PARAMS(Z_Construct_UFunction_UWrestlerProfilesInterface_Setup_Statics::NewProp_NewParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerProfilesInterface_Setup_Statics::NewProp_NewParam_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWrestlerProfilesInterface_Setup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerProfilesInterface_Setup_Statics::NewProp_NewParam,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrestlerProfilesInterface_Setup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WrestlerProfilesInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWrestlerProfilesInterface_Setup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrestlerProfilesInterface, nullptr, "Setup", nullptr, nullptr, sizeof(WrestlerProfilesInterface_eventSetup_Parms), Z_Construct_UFunction_UWrestlerProfilesInterface_Setup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerProfilesInterface_Setup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWrestlerProfilesInterface_Setup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerProfilesInterface_Setup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWrestlerProfilesInterface_Setup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWrestlerProfilesInterface_Setup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWrestlerProfilesInterface_NoRegister()
	{
		return UWrestlerProfilesInterface::StaticClass();
	}
	struct Z_Construct_UClass_UWrestlerProfilesInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWrestlerProfilesInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWrestlerProfilesInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWrestlerProfilesInterface_GetAbilityScore, "GetAbilityScore" }, // 3182665365
		{ &Z_Construct_UFunction_UWrestlerProfilesInterface_GetBodyType, "GetBodyType" }, // 4234196705
		{ &Z_Construct_UFunction_UWrestlerProfilesInterface_GetDefaultMoves, "GetDefaultMoves" }, // 296100572
		{ &Z_Construct_UFunction_UWrestlerProfilesInterface_GetFanReaction, "GetFanReaction" }, // 988014615
		{ &Z_Construct_UFunction_UWrestlerProfilesInterface_GetFavoriteProps, "GetFavoriteProps" }, // 1405491253
		{ &Z_Construct_UFunction_UWrestlerProfilesInterface_GetFightStyle, "GetFightStyle" }, // 970484719
		{ &Z_Construct_UFunction_UWrestlerProfilesInterface_GetFinisherMoves, "GetFinisherMoves" }, // 1318007345
		{ &Z_Construct_UFunction_UWrestlerProfilesInterface_GetHomeTownID, "GetHomeTownID" }, // 488173884
		{ &Z_Construct_UFunction_UWrestlerProfilesInterface_GetHomeTownText, "GetHomeTownText" }, // 851169948
		{ &Z_Construct_UFunction_UWrestlerProfilesInterface_GetHudTexture, "GetHudTexture" }, // 3234287324
		{ &Z_Construct_UFunction_UWrestlerProfilesInterface_GetReversalMotionType, "GetReversalMotionType" }, // 2128555315
		{ &Z_Construct_UFunction_UWrestlerProfilesInterface_GetSetupParam, "GetSetupParam" }, // 3026086746
		{ &Z_Construct_UFunction_UWrestlerProfilesInterface_GetSignatureMoves, "GetSignatureMoves" }, // 1244521904
		{ &Z_Construct_UFunction_UWrestlerProfilesInterface_GetSocialNetworkName, "GetSocialNetworkName" }, // 4015634874
		{ &Z_Construct_UFunction_UWrestlerProfilesInterface_GetSystemMotionType, "GetSystemMotionType" }, // 2713888171
		{ &Z_Construct_UFunction_UWrestlerProfilesInterface_GetWrestlerID, "GetWrestlerID" }, // 455761896
		{ &Z_Construct_UFunction_UWrestlerProfilesInterface_GetWrestlerName, "GetWrestlerName" }, // 2762402138
		{ &Z_Construct_UFunction_UWrestlerProfilesInterface_HasActionSkill, "HasActionSkill" }, // 2501099041
		{ &Z_Construct_UFunction_UWrestlerProfilesInterface_HasPassiveSkill, "HasPassiveSkill" }, // 216276075
		{ &Z_Construct_UFunction_UWrestlerProfilesInterface_Setup, "Setup" }, // 3888768293
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWrestlerProfilesInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WrestlerProfilesInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWrestlerProfilesInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IWrestlerProfilesInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWrestlerProfilesInterface_Statics::ClassParams = {
		&UWrestlerProfilesInterface::StaticClass,
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
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UWrestlerProfilesInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWrestlerProfilesInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWrestlerProfilesInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWrestlerProfilesInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWrestlerProfilesInterface, 3327438047);
	template<> ABP_200508_API UClass* StaticClass<UWrestlerProfilesInterface>()
	{
		return UWrestlerProfilesInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWrestlerProfilesInterface(Z_Construct_UClass_UWrestlerProfilesInterface, &UWrestlerProfilesInterface::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UWrestlerProfilesInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWrestlerProfilesInterface);
	static FName NAME_UWrestlerProfilesInterface_GetAbilityScore = FName(TEXT("GetAbilityScore"));
	int32 IWrestlerProfilesInterface::Execute_GetAbilityScore(const UObject* O, const EAbilityScoreType AbilityScoreType)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UWrestlerProfilesInterface::StaticClass()));
		WrestlerProfilesInterface_eventGetAbilityScore_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UWrestlerProfilesInterface_GetAbilityScore);
		if (Func)
		{
			Parms.AbilityScoreType=AbilityScoreType;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IWrestlerProfilesInterface*)(O->GetNativeInterfaceAddress(UWrestlerProfilesInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetAbilityScore_Implementation(AbilityScoreType);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UWrestlerProfilesInterface_GetBodyType = FName(TEXT("GetBodyType"));
	EBodyType IWrestlerProfilesInterface::Execute_GetBodyType(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UWrestlerProfilesInterface::StaticClass()));
		WrestlerProfilesInterface_eventGetBodyType_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UWrestlerProfilesInterface_GetBodyType);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IWrestlerProfilesInterface*)(O->GetNativeInterfaceAddress(UWrestlerProfilesInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetBodyType_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UWrestlerProfilesInterface_GetDefaultMoves = FName(TEXT("GetDefaultMoves"));
	void IWrestlerProfilesInterface::Execute_GetDefaultMoves(const UObject* O, FELMoves& Out)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UWrestlerProfilesInterface::StaticClass()));
		WrestlerProfilesInterface_eventGetDefaultMoves_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UWrestlerProfilesInterface_GetDefaultMoves);
		if (Func)
		{
			Parms.Out=Out;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
			Out=Parms.Out;
		}
		else if (auto I = (const IWrestlerProfilesInterface*)(O->GetNativeInterfaceAddress(UWrestlerProfilesInterface::StaticClass())))
		{
			I->GetDefaultMoves_Implementation(Out);
		}
	}
	static FName NAME_UWrestlerProfilesInterface_GetFanReaction = FName(TEXT("GetFanReaction"));
	EFanReaction IWrestlerProfilesInterface::Execute_GetFanReaction(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UWrestlerProfilesInterface::StaticClass()));
		WrestlerProfilesInterface_eventGetFanReaction_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UWrestlerProfilesInterface_GetFanReaction);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IWrestlerProfilesInterface*)(O->GetNativeInterfaceAddress(UWrestlerProfilesInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetFanReaction_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UWrestlerProfilesInterface_GetFavoriteProps = FName(TEXT("GetFavoriteProps"));
	int32 IWrestlerProfilesInterface::Execute_GetFavoriteProps(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UWrestlerProfilesInterface::StaticClass()));
		WrestlerProfilesInterface_eventGetFavoriteProps_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UWrestlerProfilesInterface_GetFavoriteProps);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IWrestlerProfilesInterface*)(O->GetNativeInterfaceAddress(UWrestlerProfilesInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetFavoriteProps_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UWrestlerProfilesInterface_GetFightStyle = FName(TEXT("GetFightStyle"));
	int32 IWrestlerProfilesInterface::Execute_GetFightStyle(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UWrestlerProfilesInterface::StaticClass()));
		WrestlerProfilesInterface_eventGetFightStyle_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UWrestlerProfilesInterface_GetFightStyle);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IWrestlerProfilesInterface*)(O->GetNativeInterfaceAddress(UWrestlerProfilesInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetFightStyle_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UWrestlerProfilesInterface_GetFinisherMoves = FName(TEXT("GetFinisherMoves"));
	void IWrestlerProfilesInterface::Execute_GetFinisherMoves(const UObject* O, FELMoves_Finisher& Out)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UWrestlerProfilesInterface::StaticClass()));
		WrestlerProfilesInterface_eventGetFinisherMoves_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UWrestlerProfilesInterface_GetFinisherMoves);
		if (Func)
		{
			Parms.Out=Out;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
			Out=Parms.Out;
		}
		else if (auto I = (const IWrestlerProfilesInterface*)(O->GetNativeInterfaceAddress(UWrestlerProfilesInterface::StaticClass())))
		{
			I->GetFinisherMoves_Implementation(Out);
		}
	}
	static FName NAME_UWrestlerProfilesInterface_GetHomeTownID = FName(TEXT("GetHomeTownID"));
	void IWrestlerProfilesInterface::Execute_GetHomeTownID(const UObject* O, FHomeTownID& Out)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UWrestlerProfilesInterface::StaticClass()));
		WrestlerProfilesInterface_eventGetHomeTownID_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UWrestlerProfilesInterface_GetHomeTownID);
		if (Func)
		{
			Parms.Out=Out;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
			Out=Parms.Out;
		}
		else if (auto I = (const IWrestlerProfilesInterface*)(O->GetNativeInterfaceAddress(UWrestlerProfilesInterface::StaticClass())))
		{
			I->GetHomeTownID_Implementation(Out);
		}
	}
	static FName NAME_UWrestlerProfilesInterface_GetHomeTownText = FName(TEXT("GetHomeTownText"));
	FText IWrestlerProfilesInterface::Execute_GetHomeTownText(const UObject* O, bool bUpper)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UWrestlerProfilesInterface::StaticClass()));
		WrestlerProfilesInterface_eventGetHomeTownText_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UWrestlerProfilesInterface_GetHomeTownText);
		if (Func)
		{
			Parms.bUpper=bUpper;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IWrestlerProfilesInterface*)(O->GetNativeInterfaceAddress(UWrestlerProfilesInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetHomeTownText_Implementation(bUpper);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UWrestlerProfilesInterface_GetHudTexture = FName(TEXT("GetHudTexture"));
	UTexture* IWrestlerProfilesInterface::Execute_GetHudTexture(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UWrestlerProfilesInterface::StaticClass()));
		WrestlerProfilesInterface_eventGetHudTexture_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UWrestlerProfilesInterface_GetHudTexture);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IWrestlerProfilesInterface*)(O->GetNativeInterfaceAddress(UWrestlerProfilesInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetHudTexture_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UWrestlerProfilesInterface_GetReversalMotionType = FName(TEXT("GetReversalMotionType"));
	EReversalMotionType IWrestlerProfilesInterface::Execute_GetReversalMotionType(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UWrestlerProfilesInterface::StaticClass()));
		WrestlerProfilesInterface_eventGetReversalMotionType_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UWrestlerProfilesInterface_GetReversalMotionType);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IWrestlerProfilesInterface*)(O->GetNativeInterfaceAddress(UWrestlerProfilesInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetReversalMotionType_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UWrestlerProfilesInterface_GetSetupParam = FName(TEXT("GetSetupParam"));
	bool IWrestlerProfilesInterface::Execute_GetSetupParam(const UObject* O, FWrestlerSetupParam& Out)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UWrestlerProfilesInterface::StaticClass()));
		WrestlerProfilesInterface_eventGetSetupParam_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UWrestlerProfilesInterface_GetSetupParam);
		if (Func)
		{
			Parms.Out=Out;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
			Out=Parms.Out;
		}
		else if (auto I = (const IWrestlerProfilesInterface*)(O->GetNativeInterfaceAddress(UWrestlerProfilesInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetSetupParam_Implementation(Out);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UWrestlerProfilesInterface_GetSignatureMoves = FName(TEXT("GetSignatureMoves"));
	void IWrestlerProfilesInterface::Execute_GetSignatureMoves(const UObject* O, FELMoves_Finisher& Out)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UWrestlerProfilesInterface::StaticClass()));
		WrestlerProfilesInterface_eventGetSignatureMoves_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UWrestlerProfilesInterface_GetSignatureMoves);
		if (Func)
		{
			Parms.Out=Out;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
			Out=Parms.Out;
		}
		else if (auto I = (const IWrestlerProfilesInterface*)(O->GetNativeInterfaceAddress(UWrestlerProfilesInterface::StaticClass())))
		{
			I->GetSignatureMoves_Implementation(Out);
		}
	}
	static FName NAME_UWrestlerProfilesInterface_GetSocialNetworkName = FName(TEXT("GetSocialNetworkName"));
	FText IWrestlerProfilesInterface::Execute_GetSocialNetworkName(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UWrestlerProfilesInterface::StaticClass()));
		WrestlerProfilesInterface_eventGetSocialNetworkName_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UWrestlerProfilesInterface_GetSocialNetworkName);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IWrestlerProfilesInterface*)(O->GetNativeInterfaceAddress(UWrestlerProfilesInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetSocialNetworkName_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UWrestlerProfilesInterface_GetSystemMotionType = FName(TEXT("GetSystemMotionType"));
	ESystemMotionType IWrestlerProfilesInterface::Execute_GetSystemMotionType(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UWrestlerProfilesInterface::StaticClass()));
		WrestlerProfilesInterface_eventGetSystemMotionType_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UWrestlerProfilesInterface_GetSystemMotionType);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IWrestlerProfilesInterface*)(O->GetNativeInterfaceAddress(UWrestlerProfilesInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetSystemMotionType_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UWrestlerProfilesInterface_GetWrestlerID = FName(TEXT("GetWrestlerID"));
	EWrestlerID_N IWrestlerProfilesInterface::Execute_GetWrestlerID(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UWrestlerProfilesInterface::StaticClass()));
		WrestlerProfilesInterface_eventGetWrestlerID_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UWrestlerProfilesInterface_GetWrestlerID);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IWrestlerProfilesInterface*)(O->GetNativeInterfaceAddress(UWrestlerProfilesInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetWrestlerID_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UWrestlerProfilesInterface_GetWrestlerName = FName(TEXT("GetWrestlerName"));
	FText IWrestlerProfilesInterface::Execute_GetWrestlerName(const UObject* O, bool bUpper, bool bMultiLined)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UWrestlerProfilesInterface::StaticClass()));
		WrestlerProfilesInterface_eventGetWrestlerName_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UWrestlerProfilesInterface_GetWrestlerName);
		if (Func)
		{
			Parms.bUpper=bUpper;
			Parms.bMultiLined=bMultiLined;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IWrestlerProfilesInterface*)(O->GetNativeInterfaceAddress(UWrestlerProfilesInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetWrestlerName_Implementation(bUpper,bMultiLined);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UWrestlerProfilesInterface_HasActionSkill = FName(TEXT("HasActionSkill"));
	bool IWrestlerProfilesInterface::Execute_HasActionSkill(const UObject* O, const int32 ActionSkillID)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UWrestlerProfilesInterface::StaticClass()));
		WrestlerProfilesInterface_eventHasActionSkill_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UWrestlerProfilesInterface_HasActionSkill);
		if (Func)
		{
			Parms.ActionSkillID=ActionSkillID;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IWrestlerProfilesInterface*)(O->GetNativeInterfaceAddress(UWrestlerProfilesInterface::StaticClass())))
		{
			Parms.ReturnValue = I->HasActionSkill_Implementation(ActionSkillID);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UWrestlerProfilesInterface_HasPassiveSkill = FName(TEXT("HasPassiveSkill"));
	bool IWrestlerProfilesInterface::Execute_HasPassiveSkill(const UObject* O, const int32 PassiveSkillID)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UWrestlerProfilesInterface::StaticClass()));
		WrestlerProfilesInterface_eventHasPassiveSkill_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UWrestlerProfilesInterface_HasPassiveSkill);
		if (Func)
		{
			Parms.PassiveSkillID=PassiveSkillID;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IWrestlerProfilesInterface*)(O->GetNativeInterfaceAddress(UWrestlerProfilesInterface::StaticClass())))
		{
			Parms.ReturnValue = I->HasPassiveSkill_Implementation(PassiveSkillID);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UWrestlerProfilesInterface_Setup = FName(TEXT("Setup"));
	void IWrestlerProfilesInterface::Execute_Setup(UObject* O, FWrestlerSetupParam const& NewParam)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UWrestlerProfilesInterface::StaticClass()));
		WrestlerProfilesInterface_eventSetup_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UWrestlerProfilesInterface_Setup);
		if (Func)
		{
			Parms.NewParam=NewParam;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IWrestlerProfilesInterface*)(O->GetNativeInterfaceAddress(UWrestlerProfilesInterface::StaticClass())))
		{
			I->Setup_Implementation(NewParam);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
