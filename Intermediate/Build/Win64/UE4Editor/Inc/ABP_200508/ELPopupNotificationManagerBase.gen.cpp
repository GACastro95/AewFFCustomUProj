// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELPopupNotificationManagerBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELPopupNotificationManagerBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELPopupNotificationManagerBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELPopupNotificationManagerBase();
	ELITE_CORE_API UClass* Z_Construct_UClass_USingletonBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FPopupOnlineChatMessage();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FPopupOnlineStatus();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EPopupOnlineStatusType();
// End Cross Module References
	DEFINE_FUNCTION(UELPopupNotificationManagerBase::execChangeExecutePopup)
	{
		P_GET_UBOOL(Z_Param__state);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeExecutePopup(Z_Param__state);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPopupNotificationManagerBase::execCheckNextPopup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckNextPopup();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPopupNotificationManagerBase::execIsExecutePopup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsExecutePopup();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPopupNotificationManagerBase::execRequestPopup_ChallengeCompleted)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__challengeId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestPopup_ChallengeCompleted(Z_Param__challengeId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPopupNotificationManagerBase::execRequestPopup_ChatMessage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__userName);
		P_GET_PROPERTY(FStrProperty,Z_Param__dispMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestPopup_ChatMessage(Z_Param__userName,Z_Param__dispMessage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPopupNotificationManagerBase::execRequestPopup_Online)
	{
		P_GET_ENUM(EPopupOnlineStatusType,Z_Param__statusType);
		P_GET_PROPERTY(FStrProperty,Z_Param__execUserName);
		P_GET_TARRAY(FString,Z_Param__targetUserName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestPopup_Online(EPopupOnlineStatusType(Z_Param__statusType),Z_Param__execUserName,Z_Param__targetUserName);
		P_NATIVE_END;
	}
	static FName NAME_UELPopupNotificationManagerBase_OnStartChallengeCompletedPopup = FName(TEXT("OnStartChallengeCompletedPopup"));
	void UELPopupNotificationManagerBase::OnStartChallengeCompletedPopup(int32 const& _challengeId)
	{
		ELPopupNotificationManagerBase_eventOnStartChallengeCompletedPopup_Parms Parms;
		Parms._challengeId=_challengeId;
		ProcessEvent(FindFunctionChecked(NAME_UELPopupNotificationManagerBase_OnStartChallengeCompletedPopup),&Parms);
	}
	static FName NAME_UELPopupNotificationManagerBase_OnStartChatMessagePopup = FName(TEXT("OnStartChatMessagePopup"));
	void UELPopupNotificationManagerBase::OnStartChatMessagePopup(FPopupOnlineChatMessage const& _chatMessage)
	{
		ELPopupNotificationManagerBase_eventOnStartChatMessagePopup_Parms Parms;
		Parms._chatMessage=_chatMessage;
		ProcessEvent(FindFunctionChecked(NAME_UELPopupNotificationManagerBase_OnStartChatMessagePopup),&Parms);
	}
	static FName NAME_UELPopupNotificationManagerBase_OnStartOnlinePopup = FName(TEXT("OnStartOnlinePopup"));
	void UELPopupNotificationManagerBase::OnStartOnlinePopup(FPopupOnlineStatus const& _onlineStatus)
	{
		ELPopupNotificationManagerBase_eventOnStartOnlinePopup_Parms Parms;
		Parms._onlineStatus=_onlineStatus;
		ProcessEvent(FindFunctionChecked(NAME_UELPopupNotificationManagerBase_OnStartOnlinePopup),&Parms);
	}
	void UELPopupNotificationManagerBase::StaticRegisterNativesUELPopupNotificationManagerBase()
	{
		UClass* Class = UELPopupNotificationManagerBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeExecutePopup", &UELPopupNotificationManagerBase::execChangeExecutePopup },
			{ "CheckNextPopup", &UELPopupNotificationManagerBase::execCheckNextPopup },
			{ "IsExecutePopup", &UELPopupNotificationManagerBase::execIsExecutePopup },
			{ "RequestPopup_ChallengeCompleted", &UELPopupNotificationManagerBase::execRequestPopup_ChallengeCompleted },
			{ "RequestPopup_ChatMessage", &UELPopupNotificationManagerBase::execRequestPopup_ChatMessage },
			{ "RequestPopup_Online", &UELPopupNotificationManagerBase::execRequestPopup_Online },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELPopupNotificationManagerBase_ChangeExecutePopup_Statics
	{
		struct ELPopupNotificationManagerBase_eventChangeExecutePopup_Parms
		{
			bool _state;
		};
		static void NewProp__state_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__state;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELPopupNotificationManagerBase_ChangeExecutePopup_Statics::NewProp__state_SetBit(void* Obj)
	{
		((ELPopupNotificationManagerBase_eventChangeExecutePopup_Parms*)Obj)->_state = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELPopupNotificationManagerBase_ChangeExecutePopup_Statics::NewProp__state = { "_state", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELPopupNotificationManagerBase_eventChangeExecutePopup_Parms), &Z_Construct_UFunction_UELPopupNotificationManagerBase_ChangeExecutePopup_Statics::NewProp__state_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPopupNotificationManagerBase_ChangeExecutePopup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPopupNotificationManagerBase_ChangeExecutePopup_Statics::NewProp__state,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPopupNotificationManagerBase_ChangeExecutePopup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPopupNotificationManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPopupNotificationManagerBase_ChangeExecutePopup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPopupNotificationManagerBase, nullptr, "ChangeExecutePopup", nullptr, nullptr, sizeof(ELPopupNotificationManagerBase_eventChangeExecutePopup_Parms), Z_Construct_UFunction_UELPopupNotificationManagerBase_ChangeExecutePopup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPopupNotificationManagerBase_ChangeExecutePopup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPopupNotificationManagerBase_ChangeExecutePopup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPopupNotificationManagerBase_ChangeExecutePopup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPopupNotificationManagerBase_ChangeExecutePopup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPopupNotificationManagerBase_ChangeExecutePopup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPopupNotificationManagerBase_CheckNextPopup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPopupNotificationManagerBase_CheckNextPopup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPopupNotificationManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPopupNotificationManagerBase_CheckNextPopup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPopupNotificationManagerBase, nullptr, "CheckNextPopup", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPopupNotificationManagerBase_CheckNextPopup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPopupNotificationManagerBase_CheckNextPopup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPopupNotificationManagerBase_CheckNextPopup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPopupNotificationManagerBase_CheckNextPopup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPopupNotificationManagerBase_IsExecutePopup_Statics
	{
		struct ELPopupNotificationManagerBase_eventIsExecutePopup_Parms
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
	void Z_Construct_UFunction_UELPopupNotificationManagerBase_IsExecutePopup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELPopupNotificationManagerBase_eventIsExecutePopup_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELPopupNotificationManagerBase_IsExecutePopup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELPopupNotificationManagerBase_eventIsExecutePopup_Parms), &Z_Construct_UFunction_UELPopupNotificationManagerBase_IsExecutePopup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPopupNotificationManagerBase_IsExecutePopup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPopupNotificationManagerBase_IsExecutePopup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPopupNotificationManagerBase_IsExecutePopup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPopupNotificationManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPopupNotificationManagerBase_IsExecutePopup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPopupNotificationManagerBase, nullptr, "IsExecutePopup", nullptr, nullptr, sizeof(ELPopupNotificationManagerBase_eventIsExecutePopup_Parms), Z_Construct_UFunction_UELPopupNotificationManagerBase_IsExecutePopup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPopupNotificationManagerBase_IsExecutePopup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPopupNotificationManagerBase_IsExecutePopup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPopupNotificationManagerBase_IsExecutePopup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPopupNotificationManagerBase_IsExecutePopup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPopupNotificationManagerBase_IsExecutePopup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPopupNotificationManagerBase_OnStartChallengeCompletedPopup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__challengeId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__challengeId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPopupNotificationManagerBase_OnStartChallengeCompletedPopup_Statics::NewProp__challengeId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELPopupNotificationManagerBase_OnStartChallengeCompletedPopup_Statics::NewProp__challengeId = { "_challengeId", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPopupNotificationManagerBase_eventOnStartChallengeCompletedPopup_Parms, _challengeId), METADATA_PARAMS(Z_Construct_UFunction_UELPopupNotificationManagerBase_OnStartChallengeCompletedPopup_Statics::NewProp__challengeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPopupNotificationManagerBase_OnStartChallengeCompletedPopup_Statics::NewProp__challengeId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPopupNotificationManagerBase_OnStartChallengeCompletedPopup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPopupNotificationManagerBase_OnStartChallengeCompletedPopup_Statics::NewProp__challengeId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPopupNotificationManagerBase_OnStartChallengeCompletedPopup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPopupNotificationManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPopupNotificationManagerBase_OnStartChallengeCompletedPopup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPopupNotificationManagerBase, nullptr, "OnStartChallengeCompletedPopup", nullptr, nullptr, sizeof(ELPopupNotificationManagerBase_eventOnStartChallengeCompletedPopup_Parms), Z_Construct_UFunction_UELPopupNotificationManagerBase_OnStartChallengeCompletedPopup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPopupNotificationManagerBase_OnStartChallengeCompletedPopup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPopupNotificationManagerBase_OnStartChallengeCompletedPopup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPopupNotificationManagerBase_OnStartChallengeCompletedPopup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPopupNotificationManagerBase_OnStartChallengeCompletedPopup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPopupNotificationManagerBase_OnStartChallengeCompletedPopup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPopupNotificationManagerBase_OnStartChatMessagePopup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chatMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__chatMessage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPopupNotificationManagerBase_OnStartChatMessagePopup_Statics::NewProp__chatMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELPopupNotificationManagerBase_OnStartChatMessagePopup_Statics::NewProp__chatMessage = { "_chatMessage", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPopupNotificationManagerBase_eventOnStartChatMessagePopup_Parms, _chatMessage), Z_Construct_UScriptStruct_FPopupOnlineChatMessage, METADATA_PARAMS(Z_Construct_UFunction_UELPopupNotificationManagerBase_OnStartChatMessagePopup_Statics::NewProp__chatMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPopupNotificationManagerBase_OnStartChatMessagePopup_Statics::NewProp__chatMessage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPopupNotificationManagerBase_OnStartChatMessagePopup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPopupNotificationManagerBase_OnStartChatMessagePopup_Statics::NewProp__chatMessage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPopupNotificationManagerBase_OnStartChatMessagePopup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPopupNotificationManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPopupNotificationManagerBase_OnStartChatMessagePopup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPopupNotificationManagerBase, nullptr, "OnStartChatMessagePopup", nullptr, nullptr, sizeof(ELPopupNotificationManagerBase_eventOnStartChatMessagePopup_Parms), Z_Construct_UFunction_UELPopupNotificationManagerBase_OnStartChatMessagePopup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPopupNotificationManagerBase_OnStartChatMessagePopup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPopupNotificationManagerBase_OnStartChatMessagePopup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPopupNotificationManagerBase_OnStartChatMessagePopup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPopupNotificationManagerBase_OnStartChatMessagePopup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPopupNotificationManagerBase_OnStartChatMessagePopup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPopupNotificationManagerBase_OnStartOnlinePopup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__onlineStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__onlineStatus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPopupNotificationManagerBase_OnStartOnlinePopup_Statics::NewProp__onlineStatus_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELPopupNotificationManagerBase_OnStartOnlinePopup_Statics::NewProp__onlineStatus = { "_onlineStatus", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPopupNotificationManagerBase_eventOnStartOnlinePopup_Parms, _onlineStatus), Z_Construct_UScriptStruct_FPopupOnlineStatus, METADATA_PARAMS(Z_Construct_UFunction_UELPopupNotificationManagerBase_OnStartOnlinePopup_Statics::NewProp__onlineStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPopupNotificationManagerBase_OnStartOnlinePopup_Statics::NewProp__onlineStatus_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPopupNotificationManagerBase_OnStartOnlinePopup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPopupNotificationManagerBase_OnStartOnlinePopup_Statics::NewProp__onlineStatus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPopupNotificationManagerBase_OnStartOnlinePopup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPopupNotificationManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPopupNotificationManagerBase_OnStartOnlinePopup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPopupNotificationManagerBase, nullptr, "OnStartOnlinePopup", nullptr, nullptr, sizeof(ELPopupNotificationManagerBase_eventOnStartOnlinePopup_Parms), Z_Construct_UFunction_UELPopupNotificationManagerBase_OnStartOnlinePopup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPopupNotificationManagerBase_OnStartOnlinePopup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPopupNotificationManagerBase_OnStartOnlinePopup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPopupNotificationManagerBase_OnStartOnlinePopup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPopupNotificationManagerBase_OnStartOnlinePopup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPopupNotificationManagerBase_OnStartOnlinePopup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPopupNotificationManagerBase_RequestPopup_ChallengeCompleted_Statics
	{
		struct ELPopupNotificationManagerBase_eventRequestPopup_ChallengeCompleted_Parms
		{
			int32 _challengeId;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__challengeId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELPopupNotificationManagerBase_RequestPopup_ChallengeCompleted_Statics::NewProp__challengeId = { "_challengeId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPopupNotificationManagerBase_eventRequestPopup_ChallengeCompleted_Parms, _challengeId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPopupNotificationManagerBase_RequestPopup_ChallengeCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPopupNotificationManagerBase_RequestPopup_ChallengeCompleted_Statics::NewProp__challengeId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPopupNotificationManagerBase_RequestPopup_ChallengeCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPopupNotificationManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPopupNotificationManagerBase_RequestPopup_ChallengeCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPopupNotificationManagerBase, nullptr, "RequestPopup_ChallengeCompleted", nullptr, nullptr, sizeof(ELPopupNotificationManagerBase_eventRequestPopup_ChallengeCompleted_Parms), Z_Construct_UFunction_UELPopupNotificationManagerBase_RequestPopup_ChallengeCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPopupNotificationManagerBase_RequestPopup_ChallengeCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPopupNotificationManagerBase_RequestPopup_ChallengeCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPopupNotificationManagerBase_RequestPopup_ChallengeCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPopupNotificationManagerBase_RequestPopup_ChallengeCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPopupNotificationManagerBase_RequestPopup_ChallengeCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPopupNotificationManagerBase_RequestPopup_ChatMessage_Statics
	{
		struct ELPopupNotificationManagerBase_eventRequestPopup_ChatMessage_Parms
		{
			FString _userName;
			FString _dispMessage;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__userName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__userName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__dispMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__dispMessage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPopupNotificationManagerBase_RequestPopup_ChatMessage_Statics::NewProp__userName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELPopupNotificationManagerBase_RequestPopup_ChatMessage_Statics::NewProp__userName = { "_userName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPopupNotificationManagerBase_eventRequestPopup_ChatMessage_Parms, _userName), METADATA_PARAMS(Z_Construct_UFunction_UELPopupNotificationManagerBase_RequestPopup_ChatMessage_Statics::NewProp__userName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPopupNotificationManagerBase_RequestPopup_ChatMessage_Statics::NewProp__userName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPopupNotificationManagerBase_RequestPopup_ChatMessage_Statics::NewProp__dispMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELPopupNotificationManagerBase_RequestPopup_ChatMessage_Statics::NewProp__dispMessage = { "_dispMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPopupNotificationManagerBase_eventRequestPopup_ChatMessage_Parms, _dispMessage), METADATA_PARAMS(Z_Construct_UFunction_UELPopupNotificationManagerBase_RequestPopup_ChatMessage_Statics::NewProp__dispMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPopupNotificationManagerBase_RequestPopup_ChatMessage_Statics::NewProp__dispMessage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPopupNotificationManagerBase_RequestPopup_ChatMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPopupNotificationManagerBase_RequestPopup_ChatMessage_Statics::NewProp__userName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPopupNotificationManagerBase_RequestPopup_ChatMessage_Statics::NewProp__dispMessage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPopupNotificationManagerBase_RequestPopup_ChatMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPopupNotificationManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPopupNotificationManagerBase_RequestPopup_ChatMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPopupNotificationManagerBase, nullptr, "RequestPopup_ChatMessage", nullptr, nullptr, sizeof(ELPopupNotificationManagerBase_eventRequestPopup_ChatMessage_Parms), Z_Construct_UFunction_UELPopupNotificationManagerBase_RequestPopup_ChatMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPopupNotificationManagerBase_RequestPopup_ChatMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPopupNotificationManagerBase_RequestPopup_ChatMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPopupNotificationManagerBase_RequestPopup_ChatMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPopupNotificationManagerBase_RequestPopup_ChatMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPopupNotificationManagerBase_RequestPopup_ChatMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPopupNotificationManagerBase_RequestPopup_Online_Statics
	{
		struct ELPopupNotificationManagerBase_eventRequestPopup_Online_Parms
		{
			EPopupOnlineStatusType _statusType;
			FString _execUserName;
			TArray<FString> _targetUserName;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__statusType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__statusType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__execUserName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__execUserName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__targetUserName_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__targetUserName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELPopupNotificationManagerBase_RequestPopup_Online_Statics::NewProp__statusType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELPopupNotificationManagerBase_RequestPopup_Online_Statics::NewProp__statusType = { "_statusType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPopupNotificationManagerBase_eventRequestPopup_Online_Parms, _statusType), Z_Construct_UEnum_ABP_200508_EPopupOnlineStatusType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPopupNotificationManagerBase_RequestPopup_Online_Statics::NewProp__execUserName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELPopupNotificationManagerBase_RequestPopup_Online_Statics::NewProp__execUserName = { "_execUserName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPopupNotificationManagerBase_eventRequestPopup_Online_Parms, _execUserName), METADATA_PARAMS(Z_Construct_UFunction_UELPopupNotificationManagerBase_RequestPopup_Online_Statics::NewProp__execUserName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPopupNotificationManagerBase_RequestPopup_Online_Statics::NewProp__execUserName_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELPopupNotificationManagerBase_RequestPopup_Online_Statics::NewProp__targetUserName_Inner = { "_targetUserName", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELPopupNotificationManagerBase_RequestPopup_Online_Statics::NewProp__targetUserName = { "_targetUserName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPopupNotificationManagerBase_eventRequestPopup_Online_Parms, _targetUserName), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPopupNotificationManagerBase_RequestPopup_Online_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPopupNotificationManagerBase_RequestPopup_Online_Statics::NewProp__statusType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPopupNotificationManagerBase_RequestPopup_Online_Statics::NewProp__statusType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPopupNotificationManagerBase_RequestPopup_Online_Statics::NewProp__execUserName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPopupNotificationManagerBase_RequestPopup_Online_Statics::NewProp__targetUserName_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPopupNotificationManagerBase_RequestPopup_Online_Statics::NewProp__targetUserName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPopupNotificationManagerBase_RequestPopup_Online_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPopupNotificationManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPopupNotificationManagerBase_RequestPopup_Online_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPopupNotificationManagerBase, nullptr, "RequestPopup_Online", nullptr, nullptr, sizeof(ELPopupNotificationManagerBase_eventRequestPopup_Online_Parms), Z_Construct_UFunction_UELPopupNotificationManagerBase_RequestPopup_Online_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPopupNotificationManagerBase_RequestPopup_Online_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPopupNotificationManagerBase_RequestPopup_Online_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPopupNotificationManagerBase_RequestPopup_Online_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPopupNotificationManagerBase_RequestPopup_Online()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPopupNotificationManagerBase_RequestPopup_Online_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELPopupNotificationManagerBase_NoRegister()
	{
		return UELPopupNotificationManagerBase::StaticClass();
	}
	struct Z_Construct_UClass_UELPopupNotificationManagerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELPopupNotificationManagerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USingletonBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELPopupNotificationManagerBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELPopupNotificationManagerBase_ChangeExecutePopup, "ChangeExecutePopup" }, // 1963960170
		{ &Z_Construct_UFunction_UELPopupNotificationManagerBase_CheckNextPopup, "CheckNextPopup" }, // 581531927
		{ &Z_Construct_UFunction_UELPopupNotificationManagerBase_IsExecutePopup, "IsExecutePopup" }, // 1525789051
		{ &Z_Construct_UFunction_UELPopupNotificationManagerBase_OnStartChallengeCompletedPopup, "OnStartChallengeCompletedPopup" }, // 3918897519
		{ &Z_Construct_UFunction_UELPopupNotificationManagerBase_OnStartChatMessagePopup, "OnStartChatMessagePopup" }, // 3042509721
		{ &Z_Construct_UFunction_UELPopupNotificationManagerBase_OnStartOnlinePopup, "OnStartOnlinePopup" }, // 2583018189
		{ &Z_Construct_UFunction_UELPopupNotificationManagerBase_RequestPopup_ChallengeCompleted, "RequestPopup_ChallengeCompleted" }, // 1799306344
		{ &Z_Construct_UFunction_UELPopupNotificationManagerBase_RequestPopup_ChatMessage, "RequestPopup_ChatMessage" }, // 2689818884
		{ &Z_Construct_UFunction_UELPopupNotificationManagerBase_RequestPopup_Online, "RequestPopup_Online" }, // 3006683635
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELPopupNotificationManagerBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELPopupNotificationManagerBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELPopupNotificationManagerBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELPopupNotificationManagerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELPopupNotificationManagerBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELPopupNotificationManagerBase_Statics::ClassParams = {
		&UELPopupNotificationManagerBase::StaticClass,
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
		0x001002A1u,
		METADATA_PARAMS(Z_Construct_UClass_UELPopupNotificationManagerBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELPopupNotificationManagerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELPopupNotificationManagerBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELPopupNotificationManagerBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELPopupNotificationManagerBase, 3620163536);
	template<> ABP_200508_API UClass* StaticClass<UELPopupNotificationManagerBase>()
	{
		return UELPopupNotificationManagerBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELPopupNotificationManagerBase(Z_Construct_UClass_UELPopupNotificationManagerBase, &UELPopupNotificationManagerBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELPopupNotificationManagerBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELPopupNotificationManagerBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
