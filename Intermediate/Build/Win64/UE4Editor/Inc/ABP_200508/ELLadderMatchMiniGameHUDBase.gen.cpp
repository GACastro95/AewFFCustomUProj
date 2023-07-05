// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELLadderMatchMiniGameHUDBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELLadderMatchMiniGameHUDBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELLadderMatchMiniGameHUDBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELLadderMatchMiniGameHUDBase();
	ELITE_GAME_API UClass* Z_Construct_UClass_UELUserWidget();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EDisplayButtonIconType();
// End Cross Module References
	DEFINE_FUNCTION(UELLadderMatchMiniGameHUDBase::execCallFailedEvent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CallFailedEvent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELLadderMatchMiniGameHUDBase::execCallSucceedEvent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CallSucceedEvent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELLadderMatchMiniGameHUDBase::execCallUnlockEvent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CallUnlockEvent();
		P_NATIVE_END;
	}
	static FName NAME_UELLadderMatchMiniGameHUDBase_PlayCancelAnim = FName(TEXT("PlayCancelAnim"));
	void UELLadderMatchMiniGameHUDBase::PlayCancelAnim()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELLadderMatchMiniGameHUDBase_PlayCancelAnim),NULL);
	}
	static FName NAME_UELLadderMatchMiniGameHUDBase_PlayFailedAnim = FName(TEXT("PlayFailedAnim"));
	void UELLadderMatchMiniGameHUDBase::PlayFailedAnim()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELLadderMatchMiniGameHUDBase_PlayFailedAnim),NULL);
	}
	static FName NAME_UELLadderMatchMiniGameHUDBase_PlayStartAnim = FName(TEXT("PlayStartAnim"));
	void UELLadderMatchMiniGameHUDBase::PlayStartAnim()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELLadderMatchMiniGameHUDBase_PlayStartAnim),NULL);
	}
	static FName NAME_UELLadderMatchMiniGameHUDBase_PlaySucceedAnim = FName(TEXT("PlaySucceedAnim"));
	void UELLadderMatchMiniGameHUDBase::PlaySucceedAnim()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELLadderMatchMiniGameHUDBase_PlaySucceedAnim),NULL);
	}
	static FName NAME_UELLadderMatchMiniGameHUDBase_PlayUnlockAnim = FName(TEXT("PlayUnlockAnim"));
	void UELLadderMatchMiniGameHUDBase::PlayUnlockAnim()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELLadderMatchMiniGameHUDBase_PlayUnlockAnim),NULL);
	}
	static FName NAME_UELLadderMatchMiniGameHUDBase_SetButtonA = FName(TEXT("SetButtonA"));
	void UELLadderMatchMiniGameHUDBase::SetButtonA(int32 PlayerIndex, EDisplayButtonIconType ButtonIconType)
	{
		ELLadderMatchMiniGameHUDBase_eventSetButtonA_Parms Parms;
		Parms.PlayerIndex=PlayerIndex;
		Parms.ButtonIconType=ButtonIconType;
		ProcessEvent(FindFunctionChecked(NAME_UELLadderMatchMiniGameHUDBase_SetButtonA),&Parms);
	}
	static FName NAME_UELLadderMatchMiniGameHUDBase_SetButtonB = FName(TEXT("SetButtonB"));
	void UELLadderMatchMiniGameHUDBase::SetButtonB(int32 PlayerIndex, EDisplayButtonIconType ButtonIconType)
	{
		ELLadderMatchMiniGameHUDBase_eventSetButtonB_Parms Parms;
		Parms.PlayerIndex=PlayerIndex;
		Parms.ButtonIconType=ButtonIconType;
		ProcessEvent(FindFunctionChecked(NAME_UELLadderMatchMiniGameHUDBase_SetButtonB),&Parms);
	}
	static FName NAME_UELLadderMatchMiniGameHUDBase_SetButtonX = FName(TEXT("SetButtonX"));
	void UELLadderMatchMiniGameHUDBase::SetButtonX(int32 PlayerIndex, EDisplayButtonIconType ButtonIconType)
	{
		ELLadderMatchMiniGameHUDBase_eventSetButtonX_Parms Parms;
		Parms.PlayerIndex=PlayerIndex;
		Parms.ButtonIconType=ButtonIconType;
		ProcessEvent(FindFunctionChecked(NAME_UELLadderMatchMiniGameHUDBase_SetButtonX),&Parms);
	}
	static FName NAME_UELLadderMatchMiniGameHUDBase_SetButtonY = FName(TEXT("SetButtonY"));
	void UELLadderMatchMiniGameHUDBase::SetButtonY(int32 PlayerIndex, EDisplayButtonIconType ButtonIconType)
	{
		ELLadderMatchMiniGameHUDBase_eventSetButtonY_Parms Parms;
		Parms.PlayerIndex=PlayerIndex;
		Parms.ButtonIconType=ButtonIconType;
		ProcessEvent(FindFunctionChecked(NAME_UELLadderMatchMiniGameHUDBase_SetButtonY),&Parms);
	}
	static FName NAME_UELLadderMatchMiniGameHUDBase_SetOnlineLayout = FName(TEXT("SetOnlineLayout"));
	void UELLadderMatchMiniGameHUDBase::SetOnlineLayout()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELLadderMatchMiniGameHUDBase_SetOnlineLayout),NULL);
	}
	static FName NAME_UELLadderMatchMiniGameHUDBase_SetProgress = FName(TEXT("SetProgress"));
	void UELLadderMatchMiniGameHUDBase::SetProgress(int32 Step, float Percent)
	{
		ELLadderMatchMiniGameHUDBase_eventSetProgress_Parms Parms;
		Parms.Step=Step;
		Parms.Percent=Percent;
		ProcessEvent(FindFunctionChecked(NAME_UELLadderMatchMiniGameHUDBase_SetProgress),&Parms);
	}
	void UELLadderMatchMiniGameHUDBase::StaticRegisterNativesUELLadderMatchMiniGameHUDBase()
	{
		UClass* Class = UELLadderMatchMiniGameHUDBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CallFailedEvent", &UELLadderMatchMiniGameHUDBase::execCallFailedEvent },
			{ "CallSucceedEvent", &UELLadderMatchMiniGameHUDBase::execCallSucceedEvent },
			{ "CallUnlockEvent", &UELLadderMatchMiniGameHUDBase::execCallUnlockEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_CallFailedEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_CallFailedEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLadderMatchMiniGameHUDBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_CallFailedEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELLadderMatchMiniGameHUDBase, nullptr, "CallFailedEvent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_CallFailedEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_CallFailedEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_CallFailedEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_CallFailedEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_CallSucceedEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_CallSucceedEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLadderMatchMiniGameHUDBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_CallSucceedEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELLadderMatchMiniGameHUDBase, nullptr, "CallSucceedEvent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_CallSucceedEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_CallSucceedEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_CallSucceedEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_CallSucceedEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_CallUnlockEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_CallUnlockEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLadderMatchMiniGameHUDBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_CallUnlockEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELLadderMatchMiniGameHUDBase, nullptr, "CallUnlockEvent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_CallUnlockEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_CallUnlockEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_CallUnlockEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_CallUnlockEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_PlayCancelAnim_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_PlayCancelAnim_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLadderMatchMiniGameHUDBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_PlayCancelAnim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELLadderMatchMiniGameHUDBase, nullptr, "PlayCancelAnim", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_PlayCancelAnim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_PlayCancelAnim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_PlayCancelAnim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_PlayCancelAnim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_PlayFailedAnim_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_PlayFailedAnim_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLadderMatchMiniGameHUDBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_PlayFailedAnim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELLadderMatchMiniGameHUDBase, nullptr, "PlayFailedAnim", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_PlayFailedAnim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_PlayFailedAnim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_PlayFailedAnim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_PlayFailedAnim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_PlayStartAnim_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_PlayStartAnim_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLadderMatchMiniGameHUDBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_PlayStartAnim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELLadderMatchMiniGameHUDBase, nullptr, "PlayStartAnim", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_PlayStartAnim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_PlayStartAnim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_PlayStartAnim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_PlayStartAnim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_PlaySucceedAnim_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_PlaySucceedAnim_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLadderMatchMiniGameHUDBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_PlaySucceedAnim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELLadderMatchMiniGameHUDBase, nullptr, "PlaySucceedAnim", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_PlaySucceedAnim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_PlaySucceedAnim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_PlaySucceedAnim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_PlaySucceedAnim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_PlayUnlockAnim_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_PlayUnlockAnim_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLadderMatchMiniGameHUDBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_PlayUnlockAnim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELLadderMatchMiniGameHUDBase, nullptr, "PlayUnlockAnim", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_PlayUnlockAnim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_PlayUnlockAnim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_PlayUnlockAnim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_PlayUnlockAnim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetButtonA_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ButtonIconType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ButtonIconType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetButtonA_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLadderMatchMiniGameHUDBase_eventSetButtonA_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetButtonA_Statics::NewProp_ButtonIconType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetButtonA_Statics::NewProp_ButtonIconType = { "ButtonIconType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLadderMatchMiniGameHUDBase_eventSetButtonA_Parms, ButtonIconType), Z_Construct_UEnum_ABP_200508_EDisplayButtonIconType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetButtonA_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetButtonA_Statics::NewProp_PlayerIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetButtonA_Statics::NewProp_ButtonIconType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetButtonA_Statics::NewProp_ButtonIconType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetButtonA_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLadderMatchMiniGameHUDBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetButtonA_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELLadderMatchMiniGameHUDBase, nullptr, "SetButtonA", nullptr, nullptr, sizeof(ELLadderMatchMiniGameHUDBase_eventSetButtonA_Parms), Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetButtonA_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetButtonA_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetButtonA_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetButtonA_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetButtonA()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetButtonA_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetButtonB_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ButtonIconType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ButtonIconType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetButtonB_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLadderMatchMiniGameHUDBase_eventSetButtonB_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetButtonB_Statics::NewProp_ButtonIconType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetButtonB_Statics::NewProp_ButtonIconType = { "ButtonIconType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLadderMatchMiniGameHUDBase_eventSetButtonB_Parms, ButtonIconType), Z_Construct_UEnum_ABP_200508_EDisplayButtonIconType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetButtonB_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetButtonB_Statics::NewProp_PlayerIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetButtonB_Statics::NewProp_ButtonIconType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetButtonB_Statics::NewProp_ButtonIconType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetButtonB_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLadderMatchMiniGameHUDBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetButtonB_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELLadderMatchMiniGameHUDBase, nullptr, "SetButtonB", nullptr, nullptr, sizeof(ELLadderMatchMiniGameHUDBase_eventSetButtonB_Parms), Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetButtonB_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetButtonB_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetButtonB_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetButtonB_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetButtonB()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetButtonB_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetButtonX_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ButtonIconType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ButtonIconType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetButtonX_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLadderMatchMiniGameHUDBase_eventSetButtonX_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetButtonX_Statics::NewProp_ButtonIconType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetButtonX_Statics::NewProp_ButtonIconType = { "ButtonIconType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLadderMatchMiniGameHUDBase_eventSetButtonX_Parms, ButtonIconType), Z_Construct_UEnum_ABP_200508_EDisplayButtonIconType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetButtonX_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetButtonX_Statics::NewProp_PlayerIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetButtonX_Statics::NewProp_ButtonIconType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetButtonX_Statics::NewProp_ButtonIconType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetButtonX_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLadderMatchMiniGameHUDBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetButtonX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELLadderMatchMiniGameHUDBase, nullptr, "SetButtonX", nullptr, nullptr, sizeof(ELLadderMatchMiniGameHUDBase_eventSetButtonX_Parms), Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetButtonX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetButtonX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetButtonX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetButtonX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetButtonX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetButtonX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetButtonY_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ButtonIconType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ButtonIconType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetButtonY_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLadderMatchMiniGameHUDBase_eventSetButtonY_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetButtonY_Statics::NewProp_ButtonIconType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetButtonY_Statics::NewProp_ButtonIconType = { "ButtonIconType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLadderMatchMiniGameHUDBase_eventSetButtonY_Parms, ButtonIconType), Z_Construct_UEnum_ABP_200508_EDisplayButtonIconType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetButtonY_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetButtonY_Statics::NewProp_PlayerIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetButtonY_Statics::NewProp_ButtonIconType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetButtonY_Statics::NewProp_ButtonIconType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetButtonY_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLadderMatchMiniGameHUDBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetButtonY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELLadderMatchMiniGameHUDBase, nullptr, "SetButtonY", nullptr, nullptr, sizeof(ELLadderMatchMiniGameHUDBase_eventSetButtonY_Parms), Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetButtonY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetButtonY_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetButtonY_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetButtonY_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetButtonY()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetButtonY_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetOnlineLayout_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetOnlineLayout_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLadderMatchMiniGameHUDBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetOnlineLayout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELLadderMatchMiniGameHUDBase, nullptr, "SetOnlineLayout", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetOnlineLayout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetOnlineLayout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetOnlineLayout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetOnlineLayout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetProgress_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Step;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Percent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetProgress_Statics::NewProp_Step = { "Step", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLadderMatchMiniGameHUDBase_eventSetProgress_Parms, Step), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetProgress_Statics::NewProp_Percent = { "Percent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLadderMatchMiniGameHUDBase_eventSetProgress_Parms, Percent), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetProgress_Statics::NewProp_Step,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetProgress_Statics::NewProp_Percent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetProgress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLadderMatchMiniGameHUDBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELLadderMatchMiniGameHUDBase, nullptr, "SetProgress", nullptr, nullptr, sizeof(ELLadderMatchMiniGameHUDBase_eventSetProgress_Parms), Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELLadderMatchMiniGameHUDBase_NoRegister()
	{
		return UELLadderMatchMiniGameHUDBase::StaticClass();
	}
	struct Z_Construct_UClass_UELLadderMatchMiniGameHUDBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_String_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_String_A;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_String_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_String_B;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_String_X_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_String_X;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_String_Y_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_String_Y;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELLadderMatchMiniGameHUDBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELLadderMatchMiniGameHUDBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_CallFailedEvent, "CallFailedEvent" }, // 204075719
		{ &Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_CallSucceedEvent, "CallSucceedEvent" }, // 1353577400
		{ &Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_CallUnlockEvent, "CallUnlockEvent" }, // 2251885688
		{ &Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_PlayCancelAnim, "PlayCancelAnim" }, // 823920593
		{ &Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_PlayFailedAnim, "PlayFailedAnim" }, // 2914316656
		{ &Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_PlayStartAnim, "PlayStartAnim" }, // 2743030621
		{ &Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_PlaySucceedAnim, "PlaySucceedAnim" }, // 2809777112
		{ &Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_PlayUnlockAnim, "PlayUnlockAnim" }, // 822334598
		{ &Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetButtonA, "SetButtonA" }, // 3154509584
		{ &Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetButtonB, "SetButtonB" }, // 4087188375
		{ &Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetButtonX, "SetButtonX" }, // 3847706116
		{ &Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetButtonY, "SetButtonY" }, // 264890772
		{ &Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetOnlineLayout, "SetOnlineLayout" }, // 3499355613
		{ &Z_Construct_UFunction_UELLadderMatchMiniGameHUDBase_SetProgress, "SetProgress" }, // 2690510090
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELLadderMatchMiniGameHUDBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELLadderMatchMiniGameHUDBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELLadderMatchMiniGameHUDBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELLadderMatchMiniGameHUDBase_Statics::NewProp_String_A_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELLadderMatchMiniGameHUDBase" },
		{ "ModuleRelativePath", "Public/ELLadderMatchMiniGameHUDBase.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UELLadderMatchMiniGameHUDBase_Statics::NewProp_String_A = { "String_A", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELLadderMatchMiniGameHUDBase, String_A), METADATA_PARAMS(Z_Construct_UClass_UELLadderMatchMiniGameHUDBase_Statics::NewProp_String_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELLadderMatchMiniGameHUDBase_Statics::NewProp_String_A_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELLadderMatchMiniGameHUDBase_Statics::NewProp_String_B_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELLadderMatchMiniGameHUDBase" },
		{ "ModuleRelativePath", "Public/ELLadderMatchMiniGameHUDBase.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UELLadderMatchMiniGameHUDBase_Statics::NewProp_String_B = { "String_B", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELLadderMatchMiniGameHUDBase, String_B), METADATA_PARAMS(Z_Construct_UClass_UELLadderMatchMiniGameHUDBase_Statics::NewProp_String_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELLadderMatchMiniGameHUDBase_Statics::NewProp_String_B_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELLadderMatchMiniGameHUDBase_Statics::NewProp_String_X_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELLadderMatchMiniGameHUDBase" },
		{ "ModuleRelativePath", "Public/ELLadderMatchMiniGameHUDBase.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UELLadderMatchMiniGameHUDBase_Statics::NewProp_String_X = { "String_X", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELLadderMatchMiniGameHUDBase, String_X), METADATA_PARAMS(Z_Construct_UClass_UELLadderMatchMiniGameHUDBase_Statics::NewProp_String_X_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELLadderMatchMiniGameHUDBase_Statics::NewProp_String_X_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELLadderMatchMiniGameHUDBase_Statics::NewProp_String_Y_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELLadderMatchMiniGameHUDBase" },
		{ "ModuleRelativePath", "Public/ELLadderMatchMiniGameHUDBase.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UELLadderMatchMiniGameHUDBase_Statics::NewProp_String_Y = { "String_Y", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELLadderMatchMiniGameHUDBase, String_Y), METADATA_PARAMS(Z_Construct_UClass_UELLadderMatchMiniGameHUDBase_Statics::NewProp_String_Y_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELLadderMatchMiniGameHUDBase_Statics::NewProp_String_Y_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELLadderMatchMiniGameHUDBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELLadderMatchMiniGameHUDBase_Statics::NewProp_String_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELLadderMatchMiniGameHUDBase_Statics::NewProp_String_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELLadderMatchMiniGameHUDBase_Statics::NewProp_String_X,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELLadderMatchMiniGameHUDBase_Statics::NewProp_String_Y,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELLadderMatchMiniGameHUDBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELLadderMatchMiniGameHUDBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELLadderMatchMiniGameHUDBase_Statics::ClassParams = {
		&UELLadderMatchMiniGameHUDBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELLadderMatchMiniGameHUDBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELLadderMatchMiniGameHUDBase_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELLadderMatchMiniGameHUDBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELLadderMatchMiniGameHUDBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELLadderMatchMiniGameHUDBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELLadderMatchMiniGameHUDBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELLadderMatchMiniGameHUDBase, 2442601665);
	template<> ABP_200508_API UClass* StaticClass<UELLadderMatchMiniGameHUDBase>()
	{
		return UELLadderMatchMiniGameHUDBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELLadderMatchMiniGameHUDBase(Z_Construct_UClass_UELLadderMatchMiniGameHUDBase, &UELLadderMatchMiniGameHUDBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELLadderMatchMiniGameHUDBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELLadderMatchMiniGameHUDBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
