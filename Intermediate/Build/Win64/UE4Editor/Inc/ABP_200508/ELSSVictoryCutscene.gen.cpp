// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSVictoryCutscene.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSVictoryCutscene() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELSSVictoryCutscene_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSVictoryCutscene();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSWrestlerType();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSPlayer_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequencePlayer_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ALevelSequenceActor_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSVictoryCutsceneParam();
// End Cross Module References
	DEFINE_FUNCTION(AELSSVictoryCutscene::execGetEditWrestlerMusicId)
	{
		P_GET_UBOOL_REF(Z_Param_Out_out_success);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_out_musicId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetEditWrestlerMusicId(Z_Param_Out_out_success,Z_Param_Out_out_musicId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSVictoryCutscene::execOnFinishedPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFinishedPlay_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSVictoryCutscene::execOnSkip)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSkip_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSVictoryCutscene::execPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Play_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSVictoryCutscene::execPlayCharacterLoopMontage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayCharacterLoopMontage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSVictoryCutscene::execPlayCharacterMontage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayCharacterMontage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSVictoryCutscene::execPlaySoundAnnounce)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlaySoundAnnounce();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSVictoryCutscene::execPrepare)
	{
		P_GET_ENUM(EWrestlerID_N,Z_Param_NewWrestlerID);
		P_GET_ENUM(ESSWrestlerType,Z_Param_WrestlerType);
		P_GET_OBJECT(ACharacter,Z_Param_NewTargetCharacter);
		P_GET_OBJECT(AELSSPlayer,Z_Param_TargetPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Prepare_Implementation(EWrestlerID_N(Z_Param_NewWrestlerID),ESSWrestlerType(Z_Param_WrestlerType),Z_Param_NewTargetCharacter,Z_Param_TargetPlayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSVictoryCutscene::execSkip)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Skip();
		P_NATIVE_END;
	}
	static FName NAME_AELSSVictoryCutscene_OnFinishedPlay = FName(TEXT("OnFinishedPlay"));
	void AELSSVictoryCutscene::OnFinishedPlay()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSVictoryCutscene_OnFinishedPlay),NULL);
	}
	static FName NAME_AELSSVictoryCutscene_OnSkip = FName(TEXT("OnSkip"));
	void AELSSVictoryCutscene::OnSkip()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSVictoryCutscene_OnSkip),NULL);
	}
	static FName NAME_AELSSVictoryCutscene_Play = FName(TEXT("Play"));
	bool AELSSVictoryCutscene::Play()
	{
		ELSSVictoryCutscene_eventPlay_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AELSSVictoryCutscene_Play),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AELSSVictoryCutscene_PlayBGM = FName(TEXT("PlayBGM"));
	void AELSSVictoryCutscene::PlayBGM()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSVictoryCutscene_PlayBGM),NULL);
	}
	static FName NAME_AELSSVictoryCutscene_Prepare = FName(TEXT("Prepare"));
	bool AELSSVictoryCutscene::Prepare(EWrestlerID_N NewWrestlerID, ESSWrestlerType WrestlerType, ACharacter* NewTargetCharacter, AELSSPlayer* TargetPlayer)
	{
		ELSSVictoryCutscene_eventPrepare_Parms Parms;
		Parms.NewWrestlerID=NewWrestlerID;
		Parms.WrestlerType=WrestlerType;
		Parms.NewTargetCharacter=NewTargetCharacter;
		Parms.TargetPlayer=TargetPlayer;
		ProcessEvent(FindFunctionChecked(NAME_AELSSVictoryCutscene_Prepare),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AELSSVictoryCutscene_StopBGM = FName(TEXT("StopBGM"));
	void AELSSVictoryCutscene::StopBGM()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSVictoryCutscene_StopBGM),NULL);
	}
	void AELSSVictoryCutscene::StaticRegisterNativesAELSSVictoryCutscene()
	{
		UClass* Class = AELSSVictoryCutscene::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEditWrestlerMusicId", &AELSSVictoryCutscene::execGetEditWrestlerMusicId },
			{ "OnFinishedPlay", &AELSSVictoryCutscene::execOnFinishedPlay },
			{ "OnSkip", &AELSSVictoryCutscene::execOnSkip },
			{ "Play", &AELSSVictoryCutscene::execPlay },
			{ "PlayCharacterLoopMontage", &AELSSVictoryCutscene::execPlayCharacterLoopMontage },
			{ "PlayCharacterMontage", &AELSSVictoryCutscene::execPlayCharacterMontage },
			{ "PlaySoundAnnounce", &AELSSVictoryCutscene::execPlaySoundAnnounce },
			{ "Prepare", &AELSSVictoryCutscene::execPrepare },
			{ "Skip", &AELSSVictoryCutscene::execSkip },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELSSVictoryCutscene_GetEditWrestlerMusicId_Statics
	{
		struct ELSSVictoryCutscene_eventGetEditWrestlerMusicId_Parms
		{
			bool out_success;
			int32 out_musicId;
		};
		static void NewProp_out_success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_out_success;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_out_musicId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSVictoryCutscene_GetEditWrestlerMusicId_Statics::NewProp_out_success_SetBit(void* Obj)
	{
		((ELSSVictoryCutscene_eventGetEditWrestlerMusicId_Parms*)Obj)->out_success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSVictoryCutscene_GetEditWrestlerMusicId_Statics::NewProp_out_success = { "out_success", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSVictoryCutscene_eventGetEditWrestlerMusicId_Parms), &Z_Construct_UFunction_AELSSVictoryCutscene_GetEditWrestlerMusicId_Statics::NewProp_out_success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSVictoryCutscene_GetEditWrestlerMusicId_Statics::NewProp_out_musicId = { "out_musicId", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSVictoryCutscene_eventGetEditWrestlerMusicId_Parms, out_musicId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSVictoryCutscene_GetEditWrestlerMusicId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSVictoryCutscene_GetEditWrestlerMusicId_Statics::NewProp_out_success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSVictoryCutscene_GetEditWrestlerMusicId_Statics::NewProp_out_musicId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSVictoryCutscene_GetEditWrestlerMusicId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSVictoryCutscene.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSVictoryCutscene_GetEditWrestlerMusicId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSVictoryCutscene, nullptr, "GetEditWrestlerMusicId", nullptr, nullptr, sizeof(ELSSVictoryCutscene_eventGetEditWrestlerMusicId_Parms), Z_Construct_UFunction_AELSSVictoryCutscene_GetEditWrestlerMusicId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSVictoryCutscene_GetEditWrestlerMusicId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSVictoryCutscene_GetEditWrestlerMusicId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSVictoryCutscene_GetEditWrestlerMusicId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSVictoryCutscene_GetEditWrestlerMusicId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSVictoryCutscene_GetEditWrestlerMusicId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSVictoryCutscene_OnFinishedPlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSVictoryCutscene_OnFinishedPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSVictoryCutscene.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSVictoryCutscene_OnFinishedPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSVictoryCutscene, nullptr, "OnFinishedPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSVictoryCutscene_OnFinishedPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSVictoryCutscene_OnFinishedPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSVictoryCutscene_OnFinishedPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSVictoryCutscene_OnFinishedPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSVictoryCutscene_OnSkip_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSVictoryCutscene_OnSkip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSVictoryCutscene.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSVictoryCutscene_OnSkip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSVictoryCutscene, nullptr, "OnSkip", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSVictoryCutscene_OnSkip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSVictoryCutscene_OnSkip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSVictoryCutscene_OnSkip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSVictoryCutscene_OnSkip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSVictoryCutscene_Play_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSVictoryCutscene_Play_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSVictoryCutscene_eventPlay_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSVictoryCutscene_Play_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSVictoryCutscene_eventPlay_Parms), &Z_Construct_UFunction_AELSSVictoryCutscene_Play_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSVictoryCutscene_Play_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSVictoryCutscene_Play_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSVictoryCutscene_Play_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSVictoryCutscene.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSVictoryCutscene_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSVictoryCutscene, nullptr, "Play", nullptr, nullptr, sizeof(ELSSVictoryCutscene_eventPlay_Parms), Z_Construct_UFunction_AELSSVictoryCutscene_Play_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSVictoryCutscene_Play_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSVictoryCutscene_Play_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSVictoryCutscene_Play_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSVictoryCutscene_Play()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSVictoryCutscene_Play_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSVictoryCutscene_PlayBGM_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSVictoryCutscene_PlayBGM_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSVictoryCutscene.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSVictoryCutscene_PlayBGM_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSVictoryCutscene, nullptr, "PlayBGM", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSVictoryCutscene_PlayBGM_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSVictoryCutscene_PlayBGM_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSVictoryCutscene_PlayBGM()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSVictoryCutscene_PlayBGM_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSVictoryCutscene_PlayCharacterLoopMontage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSVictoryCutscene_PlayCharacterLoopMontage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSVictoryCutscene.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSVictoryCutscene_PlayCharacterLoopMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSVictoryCutscene, nullptr, "PlayCharacterLoopMontage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSVictoryCutscene_PlayCharacterLoopMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSVictoryCutscene_PlayCharacterLoopMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSVictoryCutscene_PlayCharacterLoopMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSVictoryCutscene_PlayCharacterLoopMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSVictoryCutscene_PlayCharacterMontage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSVictoryCutscene_PlayCharacterMontage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSVictoryCutscene.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSVictoryCutscene_PlayCharacterMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSVictoryCutscene, nullptr, "PlayCharacterMontage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSVictoryCutscene_PlayCharacterMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSVictoryCutscene_PlayCharacterMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSVictoryCutscene_PlayCharacterMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSVictoryCutscene_PlayCharacterMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSVictoryCutscene_PlaySoundAnnounce_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSVictoryCutscene_PlaySoundAnnounce_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSVictoryCutscene.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSVictoryCutscene_PlaySoundAnnounce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSVictoryCutscene, nullptr, "PlaySoundAnnounce", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSVictoryCutscene_PlaySoundAnnounce_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSVictoryCutscene_PlaySoundAnnounce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSVictoryCutscene_PlaySoundAnnounce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSVictoryCutscene_PlaySoundAnnounce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSVictoryCutscene_Prepare_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewWrestlerID_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewWrestlerID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WrestlerType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WrestlerType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewTargetCharacter;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetPlayer;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSVictoryCutscene_Prepare_Statics::NewProp_NewWrestlerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSVictoryCutscene_Prepare_Statics::NewProp_NewWrestlerID = { "NewWrestlerID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSVictoryCutscene_eventPrepare_Parms, NewWrestlerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSVictoryCutscene_Prepare_Statics::NewProp_WrestlerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSVictoryCutscene_Prepare_Statics::NewProp_WrestlerType = { "WrestlerType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSVictoryCutscene_eventPrepare_Parms, WrestlerType), Z_Construct_UEnum_ABP_200508_ESSWrestlerType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSVictoryCutscene_Prepare_Statics::NewProp_NewTargetCharacter = { "NewTargetCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSVictoryCutscene_eventPrepare_Parms, NewTargetCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSVictoryCutscene_Prepare_Statics::NewProp_TargetPlayer = { "TargetPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSVictoryCutscene_eventPrepare_Parms, TargetPlayer), Z_Construct_UClass_AELSSPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSVictoryCutscene_Prepare_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSVictoryCutscene_eventPrepare_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSVictoryCutscene_Prepare_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSVictoryCutscene_eventPrepare_Parms), &Z_Construct_UFunction_AELSSVictoryCutscene_Prepare_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSVictoryCutscene_Prepare_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSVictoryCutscene_Prepare_Statics::NewProp_NewWrestlerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSVictoryCutscene_Prepare_Statics::NewProp_NewWrestlerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSVictoryCutscene_Prepare_Statics::NewProp_WrestlerType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSVictoryCutscene_Prepare_Statics::NewProp_WrestlerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSVictoryCutscene_Prepare_Statics::NewProp_NewTargetCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSVictoryCutscene_Prepare_Statics::NewProp_TargetPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSVictoryCutscene_Prepare_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSVictoryCutscene_Prepare_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSVictoryCutscene.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSVictoryCutscene_Prepare_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSVictoryCutscene, nullptr, "Prepare", nullptr, nullptr, sizeof(ELSSVictoryCutscene_eventPrepare_Parms), Z_Construct_UFunction_AELSSVictoryCutscene_Prepare_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSVictoryCutscene_Prepare_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSVictoryCutscene_Prepare_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSVictoryCutscene_Prepare_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSVictoryCutscene_Prepare()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSVictoryCutscene_Prepare_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSVictoryCutscene_Skip_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSVictoryCutscene_Skip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSVictoryCutscene.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSVictoryCutscene_Skip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSVictoryCutscene, nullptr, "Skip", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSVictoryCutscene_Skip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSVictoryCutscene_Skip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSVictoryCutscene_Skip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSVictoryCutscene_Skip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSVictoryCutscene_StopBGM_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSVictoryCutscene_StopBGM_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSVictoryCutscene.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSVictoryCutscene_StopBGM_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSVictoryCutscene, nullptr, "StopBGM", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSVictoryCutscene_StopBGM_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSVictoryCutscene_StopBGM_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSVictoryCutscene_StopBGM()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSVictoryCutscene_StopBGM_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELSSVictoryCutscene_NoRegister()
	{
		return AELSSVictoryCutscene::StaticClass();
	}
	struct Z_Construct_UClass_AELSSVictoryCutscene_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LevelSequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LSPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LSPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LSActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LSActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CutsceneParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CutsceneParam;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WrestlerID_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WrestlerID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_targetCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_targetCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsDonePlay_MetaData[];
#endif
		static void NewProp_IsDonePlay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsDonePlay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELSSVictoryCutscene_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELSSVictoryCutscene_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELSSVictoryCutscene_GetEditWrestlerMusicId, "GetEditWrestlerMusicId" }, // 2237118077
		{ &Z_Construct_UFunction_AELSSVictoryCutscene_OnFinishedPlay, "OnFinishedPlay" }, // 9514143
		{ &Z_Construct_UFunction_AELSSVictoryCutscene_OnSkip, "OnSkip" }, // 611250655
		{ &Z_Construct_UFunction_AELSSVictoryCutscene_Play, "Play" }, // 2819147759
		{ &Z_Construct_UFunction_AELSSVictoryCutscene_PlayBGM, "PlayBGM" }, // 2920302683
		{ &Z_Construct_UFunction_AELSSVictoryCutscene_PlayCharacterLoopMontage, "PlayCharacterLoopMontage" }, // 3166667888
		{ &Z_Construct_UFunction_AELSSVictoryCutscene_PlayCharacterMontage, "PlayCharacterMontage" }, // 2453558948
		{ &Z_Construct_UFunction_AELSSVictoryCutscene_PlaySoundAnnounce, "PlaySoundAnnounce" }, // 2425184455
		{ &Z_Construct_UFunction_AELSSVictoryCutscene_Prepare, "Prepare" }, // 743566793
		{ &Z_Construct_UFunction_AELSSVictoryCutscene_Skip, "Skip" }, // 80595282
		{ &Z_Construct_UFunction_AELSSVictoryCutscene_StopBGM, "StopBGM" }, // 1263287347
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSVictoryCutscene_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSVictoryCutscene.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSVictoryCutscene.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSVictoryCutscene_Statics::NewProp_LevelSequence_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSVictoryCutscene" },
		{ "ModuleRelativePath", "Public/ELSSVictoryCutscene.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSVictoryCutscene_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSVictoryCutscene, LevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSVictoryCutscene_Statics::NewProp_LevelSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSVictoryCutscene_Statics::NewProp_LevelSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSVictoryCutscene_Statics::NewProp_LSPlayer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSVictoryCutscene" },
		{ "ModuleRelativePath", "Public/ELSSVictoryCutscene.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSVictoryCutscene_Statics::NewProp_LSPlayer = { "LSPlayer", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSVictoryCutscene, LSPlayer), Z_Construct_UClass_ULevelSequencePlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSVictoryCutscene_Statics::NewProp_LSPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSVictoryCutscene_Statics::NewProp_LSPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSVictoryCutscene_Statics::NewProp_LSActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSVictoryCutscene" },
		{ "ModuleRelativePath", "Public/ELSSVictoryCutscene.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSVictoryCutscene_Statics::NewProp_LSActor = { "LSActor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSVictoryCutscene, LSActor), Z_Construct_UClass_ALevelSequenceActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSVictoryCutscene_Statics::NewProp_LSActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSVictoryCutscene_Statics::NewProp_LSActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSVictoryCutscene_Statics::NewProp_CutsceneParam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSVictoryCutscene" },
		{ "ModuleRelativePath", "Public/ELSSVictoryCutscene.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSVictoryCutscene_Statics::NewProp_CutsceneParam = { "CutsceneParam", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSVictoryCutscene, CutsceneParam), Z_Construct_UScriptStruct_FSSVictoryCutsceneParam, METADATA_PARAMS(Z_Construct_UClass_AELSSVictoryCutscene_Statics::NewProp_CutsceneParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSVictoryCutscene_Statics::NewProp_CutsceneParam_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AELSSVictoryCutscene_Statics::NewProp_WrestlerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSVictoryCutscene_Statics::NewProp_WrestlerID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSVictoryCutscene" },
		{ "ModuleRelativePath", "Public/ELSSVictoryCutscene.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AELSSVictoryCutscene_Statics::NewProp_WrestlerID = { "WrestlerID", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSVictoryCutscene, WrestlerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UClass_AELSSVictoryCutscene_Statics::NewProp_WrestlerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSVictoryCutscene_Statics::NewProp_WrestlerID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSVictoryCutscene_Statics::NewProp_targetCharacter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSVictoryCutscene" },
		{ "ModuleRelativePath", "Public/ELSSVictoryCutscene.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSVictoryCutscene_Statics::NewProp_targetCharacter = { "targetCharacter", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSVictoryCutscene, targetCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSVictoryCutscene_Statics::NewProp_targetCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSVictoryCutscene_Statics::NewProp_targetCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSVictoryCutscene_Statics::NewProp_IsDonePlay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSVictoryCutscene" },
		{ "ModuleRelativePath", "Public/ELSSVictoryCutscene.h" },
	};
#endif
	void Z_Construct_UClass_AELSSVictoryCutscene_Statics::NewProp_IsDonePlay_SetBit(void* Obj)
	{
		((AELSSVictoryCutscene*)Obj)->IsDonePlay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELSSVictoryCutscene_Statics::NewProp_IsDonePlay = { "IsDonePlay", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELSSVictoryCutscene), &Z_Construct_UClass_AELSSVictoryCutscene_Statics::NewProp_IsDonePlay_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELSSVictoryCutscene_Statics::NewProp_IsDonePlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSVictoryCutscene_Statics::NewProp_IsDonePlay_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELSSVictoryCutscene_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSVictoryCutscene_Statics::NewProp_LevelSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSVictoryCutscene_Statics::NewProp_LSPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSVictoryCutscene_Statics::NewProp_LSActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSVictoryCutscene_Statics::NewProp_CutsceneParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSVictoryCutscene_Statics::NewProp_WrestlerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSVictoryCutscene_Statics::NewProp_WrestlerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSVictoryCutscene_Statics::NewProp_targetCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSVictoryCutscene_Statics::NewProp_IsDonePlay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELSSVictoryCutscene_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELSSVictoryCutscene>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELSSVictoryCutscene_Statics::ClassParams = {
		&AELSSVictoryCutscene::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELSSVictoryCutscene_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELSSVictoryCutscene_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AELSSVictoryCutscene_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSVictoryCutscene_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELSSVictoryCutscene()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELSSVictoryCutscene_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELSSVictoryCutscene, 976404636);
	template<> ABP_200508_API UClass* StaticClass<AELSSVictoryCutscene>()
	{
		return AELSSVictoryCutscene::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELSSVictoryCutscene(Z_Construct_UClass_AELSSVictoryCutscene, &AELSSVictoryCutscene::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELSSVictoryCutscene"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELSSVictoryCutscene);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
