// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELVictoryCutsceneManagerCore.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELVictoryCutsceneManagerCore() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELVictoryCutsceneManagerCore_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELVictoryCutsceneManagerCore();
	ABP_200508_API UClass* Z_Construct_UClass_AELNetActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UClass* Z_Construct_UClass_AELCharacter_Native_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELVictoryCutsceneType();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ALevelSequenceActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AELVictoryCutsceneManagerCore::execGetLoser)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AELCharacter_Native**)Z_Param__Result=P_THIS->GetLoser();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELVictoryCutsceneManagerCore::execGetMontageParameter)
	{
		P_GET_OBJECT(AELCharacter_Native,Z_Param_Character);
		P_GET_UBOOL(Z_Param_IsManager);
		P_GET_PROPERTY(FIntProperty,Z_Param_TeamNo);
		P_GET_UBOOL(Z_Param_IsPlaceRing);
		P_GET_OBJECT_REF(UAnimMontage,Z_Param_Out_Montage);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Rotation);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_CastID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetMontageParameter(Z_Param_Character,Z_Param_IsManager,Z_Param_TeamNo,Z_Param_IsPlaceRing,Z_Param_Out_Montage,Z_Param_Out_Location,Z_Param_Out_Rotation,Z_Param_Out_CastID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELVictoryCutsceneManagerCore::execGetMontageParameterForReferee)
	{
		P_GET_OBJECT_REF(UAnimMontage,Z_Param_Out_Montage);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Rotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetMontageParameterForReferee(Z_Param_Out_Montage,Z_Param_Out_Location,Z_Param_Out_Rotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELVictoryCutsceneManagerCore::execGetWinner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AELCharacter_Native**)Z_Param__Result=P_THIS->GetWinner();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELVictoryCutsceneManagerCore::execLoadAsset)
	{
		P_GET_ENUM(EELVictoryCutsceneType,Z_Param_CutSceneType);
		P_GET_PROPERTY(FIntProperty,Z_Param_WrestlerNum);
		P_GET_UBOOL(Z_Param_IsTagMatch);
		P_GET_UBOOL(Z_Param_IsBattleRoyale);
		P_GET_PROPERTY(FIntProperty,Z_Param_WinTeamNo);
		P_GET_PROPERTY(FIntProperty,Z_Param_LoseTeamNo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadAsset(EELVictoryCutsceneType(Z_Param_CutSceneType),Z_Param_WrestlerNum,Z_Param_IsTagMatch,Z_Param_IsBattleRoyale,Z_Param_WinTeamNo,Z_Param_LoseTeamNo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELVictoryCutsceneManagerCore::execOnEndVictoryMotion_N)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndVictoryMotion_N();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELVictoryCutsceneManagerCore::execSetCastInfo)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_CastID);
		P_GET_OBJECT(AELCharacter_Native,Z_Param_Character);
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_MeshComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCastInfo(Z_Param_CastID,Z_Param_Character,Z_Param_MeshComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELVictoryCutsceneManagerCore::execSetCharacters)
	{
		P_GET_OBJECT(AELCharacter_Native,Z_Param_Winner);
		P_GET_OBJECT(AELCharacter_Native,Z_Param_Loser);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCharacters(Z_Param_Winner,Z_Param_Loser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELVictoryCutsceneManagerCore::execStartVictoryMotion)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_MotionTime);
		P_GET_PROPERTY(FIntProperty,Z_Param_InBeltPropID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ALevelSequenceActor**)Z_Param__Result=P_THIS->StartVictoryMotion(Z_Param_MotionTime,Z_Param_InBeltPropID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELVictoryCutsceneManagerCore::execUnloadAssets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnloadAssets();
		P_NATIVE_END;
	}
	static FName NAME_AELVictoryCutsceneManagerCore_OnCompletedLoad_BP = FName(TEXT("OnCompletedLoad_BP"));
	void AELVictoryCutsceneManagerCore::OnCompletedLoad_BP()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELVictoryCutsceneManagerCore_OnCompletedLoad_BP),NULL);
	}
	static FName NAME_AELVictoryCutsceneManagerCore_OnEndVictoryMotion_Impl = FName(TEXT("OnEndVictoryMotion_Impl"));
	void AELVictoryCutsceneManagerCore::OnEndVictoryMotion_Impl()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELVictoryCutsceneManagerCore_OnEndVictoryMotion_Impl),NULL);
	}
	void AELVictoryCutsceneManagerCore::StaticRegisterNativesAELVictoryCutsceneManagerCore()
	{
		UClass* Class = AELVictoryCutsceneManagerCore::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLoser", &AELVictoryCutsceneManagerCore::execGetLoser },
			{ "GetMontageParameter", &AELVictoryCutsceneManagerCore::execGetMontageParameter },
			{ "GetMontageParameterForReferee", &AELVictoryCutsceneManagerCore::execGetMontageParameterForReferee },
			{ "GetWinner", &AELVictoryCutsceneManagerCore::execGetWinner },
			{ "LoadAsset", &AELVictoryCutsceneManagerCore::execLoadAsset },
			{ "OnEndVictoryMotion_N", &AELVictoryCutsceneManagerCore::execOnEndVictoryMotion_N },
			{ "SetCastInfo", &AELVictoryCutsceneManagerCore::execSetCastInfo },
			{ "SetCharacters", &AELVictoryCutsceneManagerCore::execSetCharacters },
			{ "StartVictoryMotion", &AELVictoryCutsceneManagerCore::execStartVictoryMotion },
			{ "UnloadAssets", &AELVictoryCutsceneManagerCore::execUnloadAssets },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELVictoryCutsceneManagerCore_GetLoser_Statics
	{
		struct ELVictoryCutsceneManagerCore_eventGetLoser_Parms
		{
			AELCharacter_Native* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELVictoryCutsceneManagerCore_GetLoser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELVictoryCutsceneManagerCore_eventGetLoser_Parms, ReturnValue), Z_Construct_UClass_AELCharacter_Native_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELVictoryCutsceneManagerCore_GetLoser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELVictoryCutsceneManagerCore_GetLoser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELVictoryCutsceneManagerCore_GetLoser_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELVictoryCutsceneManagerCore.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELVictoryCutsceneManagerCore_GetLoser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELVictoryCutsceneManagerCore, nullptr, "GetLoser", nullptr, nullptr, sizeof(ELVictoryCutsceneManagerCore_eventGetLoser_Parms), Z_Construct_UFunction_AELVictoryCutsceneManagerCore_GetLoser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELVictoryCutsceneManagerCore_GetLoser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELVictoryCutsceneManagerCore_GetLoser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELVictoryCutsceneManagerCore_GetLoser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELVictoryCutsceneManagerCore_GetLoser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELVictoryCutsceneManagerCore_GetLoser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELVictoryCutsceneManagerCore_GetMontageParameter_Statics
	{
		struct ELVictoryCutsceneManagerCore_eventGetMontageParameter_Parms
		{
			AELCharacter_Native* Character;
			bool IsManager;
			int32 TeamNo;
			bool IsPlaceRing;
			UAnimMontage* Montage;
			FVector Location;
			FRotator Rotation;
			int32 CastID;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static void NewProp_IsManager_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsManager;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TeamNo;
		static void NewProp_IsPlaceRing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsPlaceRing;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CastID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELVictoryCutsceneManagerCore_GetMontageParameter_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELVictoryCutsceneManagerCore_eventGetMontageParameter_Parms, Character), Z_Construct_UClass_AELCharacter_Native_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELVictoryCutsceneManagerCore_GetMontageParameter_Statics::NewProp_IsManager_SetBit(void* Obj)
	{
		((ELVictoryCutsceneManagerCore_eventGetMontageParameter_Parms*)Obj)->IsManager = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELVictoryCutsceneManagerCore_GetMontageParameter_Statics::NewProp_IsManager = { "IsManager", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELVictoryCutsceneManagerCore_eventGetMontageParameter_Parms), &Z_Construct_UFunction_AELVictoryCutsceneManagerCore_GetMontageParameter_Statics::NewProp_IsManager_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELVictoryCutsceneManagerCore_GetMontageParameter_Statics::NewProp_TeamNo = { "TeamNo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELVictoryCutsceneManagerCore_eventGetMontageParameter_Parms, TeamNo), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELVictoryCutsceneManagerCore_GetMontageParameter_Statics::NewProp_IsPlaceRing_SetBit(void* Obj)
	{
		((ELVictoryCutsceneManagerCore_eventGetMontageParameter_Parms*)Obj)->IsPlaceRing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELVictoryCutsceneManagerCore_GetMontageParameter_Statics::NewProp_IsPlaceRing = { "IsPlaceRing", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELVictoryCutsceneManagerCore_eventGetMontageParameter_Parms), &Z_Construct_UFunction_AELVictoryCutsceneManagerCore_GetMontageParameter_Statics::NewProp_IsPlaceRing_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELVictoryCutsceneManagerCore_GetMontageParameter_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELVictoryCutsceneManagerCore_eventGetMontageParameter_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELVictoryCutsceneManagerCore_GetMontageParameter_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELVictoryCutsceneManagerCore_eventGetMontageParameter_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELVictoryCutsceneManagerCore_GetMontageParameter_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELVictoryCutsceneManagerCore_eventGetMontageParameter_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELVictoryCutsceneManagerCore_GetMontageParameter_Statics::NewProp_CastID = { "CastID", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELVictoryCutsceneManagerCore_eventGetMontageParameter_Parms, CastID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELVictoryCutsceneManagerCore_GetMontageParameter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELVictoryCutsceneManagerCore_eventGetMontageParameter_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELVictoryCutsceneManagerCore_GetMontageParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELVictoryCutsceneManagerCore_eventGetMontageParameter_Parms), &Z_Construct_UFunction_AELVictoryCutsceneManagerCore_GetMontageParameter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELVictoryCutsceneManagerCore_GetMontageParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELVictoryCutsceneManagerCore_GetMontageParameter_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELVictoryCutsceneManagerCore_GetMontageParameter_Statics::NewProp_IsManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELVictoryCutsceneManagerCore_GetMontageParameter_Statics::NewProp_TeamNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELVictoryCutsceneManagerCore_GetMontageParameter_Statics::NewProp_IsPlaceRing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELVictoryCutsceneManagerCore_GetMontageParameter_Statics::NewProp_Montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELVictoryCutsceneManagerCore_GetMontageParameter_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELVictoryCutsceneManagerCore_GetMontageParameter_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELVictoryCutsceneManagerCore_GetMontageParameter_Statics::NewProp_CastID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELVictoryCutsceneManagerCore_GetMontageParameter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELVictoryCutsceneManagerCore_GetMontageParameter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELVictoryCutsceneManagerCore.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELVictoryCutsceneManagerCore_GetMontageParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELVictoryCutsceneManagerCore, nullptr, "GetMontageParameter", nullptr, nullptr, sizeof(ELVictoryCutsceneManagerCore_eventGetMontageParameter_Parms), Z_Construct_UFunction_AELVictoryCutsceneManagerCore_GetMontageParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELVictoryCutsceneManagerCore_GetMontageParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELVictoryCutsceneManagerCore_GetMontageParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELVictoryCutsceneManagerCore_GetMontageParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELVictoryCutsceneManagerCore_GetMontageParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELVictoryCutsceneManagerCore_GetMontageParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELVictoryCutsceneManagerCore_GetMontageParameterForReferee_Statics
	{
		struct ELVictoryCutsceneManagerCore_eventGetMontageParameterForReferee_Parms
		{
			UAnimMontage* Montage;
			FVector Location;
			FRotator Rotation;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELVictoryCutsceneManagerCore_GetMontageParameterForReferee_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELVictoryCutsceneManagerCore_eventGetMontageParameterForReferee_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELVictoryCutsceneManagerCore_GetMontageParameterForReferee_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELVictoryCutsceneManagerCore_eventGetMontageParameterForReferee_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELVictoryCutsceneManagerCore_GetMontageParameterForReferee_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELVictoryCutsceneManagerCore_eventGetMontageParameterForReferee_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELVictoryCutsceneManagerCore_GetMontageParameterForReferee_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELVictoryCutsceneManagerCore_GetMontageParameterForReferee_Statics::NewProp_Montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELVictoryCutsceneManagerCore_GetMontageParameterForReferee_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELVictoryCutsceneManagerCore_GetMontageParameterForReferee_Statics::NewProp_Rotation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELVictoryCutsceneManagerCore_GetMontageParameterForReferee_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELVictoryCutsceneManagerCore.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELVictoryCutsceneManagerCore_GetMontageParameterForReferee_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELVictoryCutsceneManagerCore, nullptr, "GetMontageParameterForReferee", nullptr, nullptr, sizeof(ELVictoryCutsceneManagerCore_eventGetMontageParameterForReferee_Parms), Z_Construct_UFunction_AELVictoryCutsceneManagerCore_GetMontageParameterForReferee_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELVictoryCutsceneManagerCore_GetMontageParameterForReferee_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELVictoryCutsceneManagerCore_GetMontageParameterForReferee_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELVictoryCutsceneManagerCore_GetMontageParameterForReferee_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELVictoryCutsceneManagerCore_GetMontageParameterForReferee()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELVictoryCutsceneManagerCore_GetMontageParameterForReferee_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELVictoryCutsceneManagerCore_GetWinner_Statics
	{
		struct ELVictoryCutsceneManagerCore_eventGetWinner_Parms
		{
			AELCharacter_Native* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELVictoryCutsceneManagerCore_GetWinner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELVictoryCutsceneManagerCore_eventGetWinner_Parms, ReturnValue), Z_Construct_UClass_AELCharacter_Native_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELVictoryCutsceneManagerCore_GetWinner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELVictoryCutsceneManagerCore_GetWinner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELVictoryCutsceneManagerCore_GetWinner_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELVictoryCutsceneManagerCore.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELVictoryCutsceneManagerCore_GetWinner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELVictoryCutsceneManagerCore, nullptr, "GetWinner", nullptr, nullptr, sizeof(ELVictoryCutsceneManagerCore_eventGetWinner_Parms), Z_Construct_UFunction_AELVictoryCutsceneManagerCore_GetWinner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELVictoryCutsceneManagerCore_GetWinner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELVictoryCutsceneManagerCore_GetWinner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELVictoryCutsceneManagerCore_GetWinner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELVictoryCutsceneManagerCore_GetWinner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELVictoryCutsceneManagerCore_GetWinner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELVictoryCutsceneManagerCore_LoadAsset_Statics
	{
		struct ELVictoryCutsceneManagerCore_eventLoadAsset_Parms
		{
			EELVictoryCutsceneType CutSceneType;
			int32 WrestlerNum;
			bool IsTagMatch;
			bool IsBattleRoyale;
			int32 WinTeamNo;
			int32 LoseTeamNo;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CutSceneType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CutSceneType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WrestlerNum;
		static void NewProp_IsTagMatch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsTagMatch;
		static void NewProp_IsBattleRoyale_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsBattleRoyale;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WinTeamNo;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LoseTeamNo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELVictoryCutsceneManagerCore_LoadAsset_Statics::NewProp_CutSceneType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELVictoryCutsceneManagerCore_LoadAsset_Statics::NewProp_CutSceneType = { "CutSceneType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELVictoryCutsceneManagerCore_eventLoadAsset_Parms, CutSceneType), Z_Construct_UEnum_ABP_200508_EELVictoryCutsceneType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELVictoryCutsceneManagerCore_LoadAsset_Statics::NewProp_WrestlerNum = { "WrestlerNum", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELVictoryCutsceneManagerCore_eventLoadAsset_Parms, WrestlerNum), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELVictoryCutsceneManagerCore_LoadAsset_Statics::NewProp_IsTagMatch_SetBit(void* Obj)
	{
		((ELVictoryCutsceneManagerCore_eventLoadAsset_Parms*)Obj)->IsTagMatch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELVictoryCutsceneManagerCore_LoadAsset_Statics::NewProp_IsTagMatch = { "IsTagMatch", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELVictoryCutsceneManagerCore_eventLoadAsset_Parms), &Z_Construct_UFunction_AELVictoryCutsceneManagerCore_LoadAsset_Statics::NewProp_IsTagMatch_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELVictoryCutsceneManagerCore_LoadAsset_Statics::NewProp_IsBattleRoyale_SetBit(void* Obj)
	{
		((ELVictoryCutsceneManagerCore_eventLoadAsset_Parms*)Obj)->IsBattleRoyale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELVictoryCutsceneManagerCore_LoadAsset_Statics::NewProp_IsBattleRoyale = { "IsBattleRoyale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELVictoryCutsceneManagerCore_eventLoadAsset_Parms), &Z_Construct_UFunction_AELVictoryCutsceneManagerCore_LoadAsset_Statics::NewProp_IsBattleRoyale_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELVictoryCutsceneManagerCore_LoadAsset_Statics::NewProp_WinTeamNo = { "WinTeamNo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELVictoryCutsceneManagerCore_eventLoadAsset_Parms, WinTeamNo), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELVictoryCutsceneManagerCore_LoadAsset_Statics::NewProp_LoseTeamNo = { "LoseTeamNo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELVictoryCutsceneManagerCore_eventLoadAsset_Parms, LoseTeamNo), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELVictoryCutsceneManagerCore_LoadAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELVictoryCutsceneManagerCore_LoadAsset_Statics::NewProp_CutSceneType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELVictoryCutsceneManagerCore_LoadAsset_Statics::NewProp_CutSceneType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELVictoryCutsceneManagerCore_LoadAsset_Statics::NewProp_WrestlerNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELVictoryCutsceneManagerCore_LoadAsset_Statics::NewProp_IsTagMatch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELVictoryCutsceneManagerCore_LoadAsset_Statics::NewProp_IsBattleRoyale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELVictoryCutsceneManagerCore_LoadAsset_Statics::NewProp_WinTeamNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELVictoryCutsceneManagerCore_LoadAsset_Statics::NewProp_LoseTeamNo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELVictoryCutsceneManagerCore_LoadAsset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELVictoryCutsceneManagerCore.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELVictoryCutsceneManagerCore_LoadAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELVictoryCutsceneManagerCore, nullptr, "LoadAsset", nullptr, nullptr, sizeof(ELVictoryCutsceneManagerCore_eventLoadAsset_Parms), Z_Construct_UFunction_AELVictoryCutsceneManagerCore_LoadAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELVictoryCutsceneManagerCore_LoadAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELVictoryCutsceneManagerCore_LoadAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELVictoryCutsceneManagerCore_LoadAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELVictoryCutsceneManagerCore_LoadAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELVictoryCutsceneManagerCore_LoadAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELVictoryCutsceneManagerCore_OnCompletedLoad_BP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELVictoryCutsceneManagerCore_OnCompletedLoad_BP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELVictoryCutsceneManagerCore.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELVictoryCutsceneManagerCore_OnCompletedLoad_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELVictoryCutsceneManagerCore, nullptr, "OnCompletedLoad_BP", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELVictoryCutsceneManagerCore_OnCompletedLoad_BP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELVictoryCutsceneManagerCore_OnCompletedLoad_BP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELVictoryCutsceneManagerCore_OnCompletedLoad_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELVictoryCutsceneManagerCore_OnCompletedLoad_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELVictoryCutsceneManagerCore_OnEndVictoryMotion_Impl_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELVictoryCutsceneManagerCore_OnEndVictoryMotion_Impl_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELVictoryCutsceneManagerCore.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELVictoryCutsceneManagerCore_OnEndVictoryMotion_Impl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELVictoryCutsceneManagerCore, nullptr, "OnEndVictoryMotion_Impl", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELVictoryCutsceneManagerCore_OnEndVictoryMotion_Impl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELVictoryCutsceneManagerCore_OnEndVictoryMotion_Impl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELVictoryCutsceneManagerCore_OnEndVictoryMotion_Impl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELVictoryCutsceneManagerCore_OnEndVictoryMotion_Impl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELVictoryCutsceneManagerCore_OnEndVictoryMotion_N_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELVictoryCutsceneManagerCore_OnEndVictoryMotion_N_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELVictoryCutsceneManagerCore.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELVictoryCutsceneManagerCore_OnEndVictoryMotion_N_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELVictoryCutsceneManagerCore, nullptr, "OnEndVictoryMotion_N", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELVictoryCutsceneManagerCore_OnEndVictoryMotion_N_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELVictoryCutsceneManagerCore_OnEndVictoryMotion_N_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELVictoryCutsceneManagerCore_OnEndVictoryMotion_N()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELVictoryCutsceneManagerCore_OnEndVictoryMotion_N_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELVictoryCutsceneManagerCore_SetCastInfo_Statics
	{
		struct ELVictoryCutsceneManagerCore_eventSetCastInfo_Parms
		{
			int32 CastID;
			AELCharacter_Native* Character;
			USkeletalMeshComponent* MeshComponent;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CastID;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELVictoryCutsceneManagerCore_SetCastInfo_Statics::NewProp_CastID = { "CastID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELVictoryCutsceneManagerCore_eventSetCastInfo_Parms, CastID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELVictoryCutsceneManagerCore_SetCastInfo_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELVictoryCutsceneManagerCore_eventSetCastInfo_Parms, Character), Z_Construct_UClass_AELCharacter_Native_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELVictoryCutsceneManagerCore_SetCastInfo_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELVictoryCutsceneManagerCore_SetCastInfo_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELVictoryCutsceneManagerCore_eventSetCastInfo_Parms, MeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELVictoryCutsceneManagerCore_SetCastInfo_Statics::NewProp_MeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELVictoryCutsceneManagerCore_SetCastInfo_Statics::NewProp_MeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELVictoryCutsceneManagerCore_SetCastInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELVictoryCutsceneManagerCore_SetCastInfo_Statics::NewProp_CastID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELVictoryCutsceneManagerCore_SetCastInfo_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELVictoryCutsceneManagerCore_SetCastInfo_Statics::NewProp_MeshComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELVictoryCutsceneManagerCore_SetCastInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELVictoryCutsceneManagerCore.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELVictoryCutsceneManagerCore_SetCastInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELVictoryCutsceneManagerCore, nullptr, "SetCastInfo", nullptr, nullptr, sizeof(ELVictoryCutsceneManagerCore_eventSetCastInfo_Parms), Z_Construct_UFunction_AELVictoryCutsceneManagerCore_SetCastInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELVictoryCutsceneManagerCore_SetCastInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELVictoryCutsceneManagerCore_SetCastInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELVictoryCutsceneManagerCore_SetCastInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELVictoryCutsceneManagerCore_SetCastInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELVictoryCutsceneManagerCore_SetCastInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELVictoryCutsceneManagerCore_SetCharacters_Statics
	{
		struct ELVictoryCutsceneManagerCore_eventSetCharacters_Parms
		{
			AELCharacter_Native* Winner;
			AELCharacter_Native* Loser;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Winner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Loser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELVictoryCutsceneManagerCore_SetCharacters_Statics::NewProp_Winner = { "Winner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELVictoryCutsceneManagerCore_eventSetCharacters_Parms, Winner), Z_Construct_UClass_AELCharacter_Native_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELVictoryCutsceneManagerCore_SetCharacters_Statics::NewProp_Loser = { "Loser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELVictoryCutsceneManagerCore_eventSetCharacters_Parms, Loser), Z_Construct_UClass_AELCharacter_Native_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELVictoryCutsceneManagerCore_SetCharacters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELVictoryCutsceneManagerCore_SetCharacters_Statics::NewProp_Winner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELVictoryCutsceneManagerCore_SetCharacters_Statics::NewProp_Loser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELVictoryCutsceneManagerCore_SetCharacters_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELVictoryCutsceneManagerCore.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELVictoryCutsceneManagerCore_SetCharacters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELVictoryCutsceneManagerCore, nullptr, "SetCharacters", nullptr, nullptr, sizeof(ELVictoryCutsceneManagerCore_eventSetCharacters_Parms), Z_Construct_UFunction_AELVictoryCutsceneManagerCore_SetCharacters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELVictoryCutsceneManagerCore_SetCharacters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELVictoryCutsceneManagerCore_SetCharacters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELVictoryCutsceneManagerCore_SetCharacters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELVictoryCutsceneManagerCore_SetCharacters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELVictoryCutsceneManagerCore_SetCharacters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELVictoryCutsceneManagerCore_StartVictoryMotion_Statics
	{
		struct ELVictoryCutsceneManagerCore_eventStartVictoryMotion_Parms
		{
			float MotionTime;
			int32 InBeltPropID;
			ALevelSequenceActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MotionTime;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InBeltPropID;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELVictoryCutsceneManagerCore_StartVictoryMotion_Statics::NewProp_MotionTime = { "MotionTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELVictoryCutsceneManagerCore_eventStartVictoryMotion_Parms, MotionTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELVictoryCutsceneManagerCore_StartVictoryMotion_Statics::NewProp_InBeltPropID = { "InBeltPropID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELVictoryCutsceneManagerCore_eventStartVictoryMotion_Parms, InBeltPropID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELVictoryCutsceneManagerCore_StartVictoryMotion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELVictoryCutsceneManagerCore_eventStartVictoryMotion_Parms, ReturnValue), Z_Construct_UClass_ALevelSequenceActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELVictoryCutsceneManagerCore_StartVictoryMotion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELVictoryCutsceneManagerCore_StartVictoryMotion_Statics::NewProp_MotionTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELVictoryCutsceneManagerCore_StartVictoryMotion_Statics::NewProp_InBeltPropID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELVictoryCutsceneManagerCore_StartVictoryMotion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELVictoryCutsceneManagerCore_StartVictoryMotion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELVictoryCutsceneManagerCore.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELVictoryCutsceneManagerCore_StartVictoryMotion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELVictoryCutsceneManagerCore, nullptr, "StartVictoryMotion", nullptr, nullptr, sizeof(ELVictoryCutsceneManagerCore_eventStartVictoryMotion_Parms), Z_Construct_UFunction_AELVictoryCutsceneManagerCore_StartVictoryMotion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELVictoryCutsceneManagerCore_StartVictoryMotion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELVictoryCutsceneManagerCore_StartVictoryMotion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELVictoryCutsceneManagerCore_StartVictoryMotion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELVictoryCutsceneManagerCore_StartVictoryMotion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELVictoryCutsceneManagerCore_StartVictoryMotion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELVictoryCutsceneManagerCore_UnloadAssets_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELVictoryCutsceneManagerCore_UnloadAssets_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELVictoryCutsceneManagerCore.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELVictoryCutsceneManagerCore_UnloadAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELVictoryCutsceneManagerCore, nullptr, "UnloadAssets", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELVictoryCutsceneManagerCore_UnloadAssets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELVictoryCutsceneManagerCore_UnloadAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELVictoryCutsceneManagerCore_UnloadAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELVictoryCutsceneManagerCore_UnloadAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELVictoryCutsceneManagerCore_NoRegister()
	{
		return AELVictoryCutsceneManagerCore::StaticClass();
	}
	struct Z_Construct_UClass_AELVictoryCutsceneManagerCore_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntractiveVictoryParameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IntractiveVictoryParameter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VictoryCutsceneParameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VictoryCutsceneParameter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VictoryCutsceneAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VictoryCutsceneAnimation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELVictoryCutsceneManagerCore_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AELNetActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELVictoryCutsceneManagerCore_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELVictoryCutsceneManagerCore_GetLoser, "GetLoser" }, // 1158442767
		{ &Z_Construct_UFunction_AELVictoryCutsceneManagerCore_GetMontageParameter, "GetMontageParameter" }, // 3396858624
		{ &Z_Construct_UFunction_AELVictoryCutsceneManagerCore_GetMontageParameterForReferee, "GetMontageParameterForReferee" }, // 3354096120
		{ &Z_Construct_UFunction_AELVictoryCutsceneManagerCore_GetWinner, "GetWinner" }, // 1703218607
		{ &Z_Construct_UFunction_AELVictoryCutsceneManagerCore_LoadAsset, "LoadAsset" }, // 2708534761
		{ &Z_Construct_UFunction_AELVictoryCutsceneManagerCore_OnCompletedLoad_BP, "OnCompletedLoad_BP" }, // 131617648
		{ &Z_Construct_UFunction_AELVictoryCutsceneManagerCore_OnEndVictoryMotion_Impl, "OnEndVictoryMotion_Impl" }, // 2852793702
		{ &Z_Construct_UFunction_AELVictoryCutsceneManagerCore_OnEndVictoryMotion_N, "OnEndVictoryMotion_N" }, // 3244524815
		{ &Z_Construct_UFunction_AELVictoryCutsceneManagerCore_SetCastInfo, "SetCastInfo" }, // 895933641
		{ &Z_Construct_UFunction_AELVictoryCutsceneManagerCore_SetCharacters, "SetCharacters" }, // 3380218407
		{ &Z_Construct_UFunction_AELVictoryCutsceneManagerCore_StartVictoryMotion, "StartVictoryMotion" }, // 2362418573
		{ &Z_Construct_UFunction_AELVictoryCutsceneManagerCore_UnloadAssets, "UnloadAssets" }, // 3652684688
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELVictoryCutsceneManagerCore_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELVictoryCutsceneManagerCore.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELVictoryCutsceneManagerCore.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELVictoryCutsceneManagerCore_Statics::NewProp_IntractiveVictoryParameter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELVictoryCutsceneManagerCore" },
		{ "ModuleRelativePath", "Public/ELVictoryCutsceneManagerCore.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELVictoryCutsceneManagerCore_Statics::NewProp_IntractiveVictoryParameter = { "IntractiveVictoryParameter", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELVictoryCutsceneManagerCore, IntractiveVictoryParameter), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELVictoryCutsceneManagerCore_Statics::NewProp_IntractiveVictoryParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELVictoryCutsceneManagerCore_Statics::NewProp_IntractiveVictoryParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELVictoryCutsceneManagerCore_Statics::NewProp_VictoryCutsceneParameter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELVictoryCutsceneManagerCore" },
		{ "ModuleRelativePath", "Public/ELVictoryCutsceneManagerCore.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELVictoryCutsceneManagerCore_Statics::NewProp_VictoryCutsceneParameter = { "VictoryCutsceneParameter", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELVictoryCutsceneManagerCore, VictoryCutsceneParameter), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELVictoryCutsceneManagerCore_Statics::NewProp_VictoryCutsceneParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELVictoryCutsceneManagerCore_Statics::NewProp_VictoryCutsceneParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELVictoryCutsceneManagerCore_Statics::NewProp_VictoryCutsceneAnimation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELVictoryCutsceneManagerCore" },
		{ "ModuleRelativePath", "Public/ELVictoryCutsceneManagerCore.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELVictoryCutsceneManagerCore_Statics::NewProp_VictoryCutsceneAnimation = { "VictoryCutsceneAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELVictoryCutsceneManagerCore, VictoryCutsceneAnimation), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELVictoryCutsceneManagerCore_Statics::NewProp_VictoryCutsceneAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELVictoryCutsceneManagerCore_Statics::NewProp_VictoryCutsceneAnimation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELVictoryCutsceneManagerCore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELVictoryCutsceneManagerCore_Statics::NewProp_IntractiveVictoryParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELVictoryCutsceneManagerCore_Statics::NewProp_VictoryCutsceneParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELVictoryCutsceneManagerCore_Statics::NewProp_VictoryCutsceneAnimation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELVictoryCutsceneManagerCore_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELVictoryCutsceneManagerCore>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELVictoryCutsceneManagerCore_Statics::ClassParams = {
		&AELVictoryCutsceneManagerCore::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELVictoryCutsceneManagerCore_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELVictoryCutsceneManagerCore_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELVictoryCutsceneManagerCore_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELVictoryCutsceneManagerCore_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELVictoryCutsceneManagerCore()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELVictoryCutsceneManagerCore_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELVictoryCutsceneManagerCore, 3324773205);
	template<> ABP_200508_API UClass* StaticClass<AELVictoryCutsceneManagerCore>()
	{
		return AELVictoryCutsceneManagerCore::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELVictoryCutsceneManagerCore(Z_Construct_UClass_AELVictoryCutsceneManagerCore, &AELVictoryCutsceneManagerCore::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELVictoryCutsceneManagerCore"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELVictoryCutsceneManagerCore);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
