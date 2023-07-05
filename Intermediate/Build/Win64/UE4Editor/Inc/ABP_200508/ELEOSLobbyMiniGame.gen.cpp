// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELEOSLobbyMiniGame.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELEOSLobbyMiniGame() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELEOSLobbyMiniGame_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELEOSLobbyMiniGame();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UClass* Z_Construct_UClass_UELEOSLobbyMiniGameInfo_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELEOSLobbyMiniGameSteps();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELEOSLobbyPacketType();
	ABP_200508_API UClass* Z_Construct_UClass_ULobbyPacketBase_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSUserBase_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSUser_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELEOSLobby_NoRegister();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_OnSetupCompleteEvent__DelegateSignature();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_OnMiniGameNotify__DelegateSignature();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_OnMiniGameOwnerSelectInfo__DelegateSignature();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
// End Cross Module References
	DEFINE_FUNCTION(AELEOSLobbyMiniGame::execDispose)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Dispose();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELEOSLobbyMiniGame::execGetELEOSLobbyMiniGameInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UELEOSLobbyMiniGameInfo**)Z_Param__Result=P_THIS->GetELEOSLobbyMiniGameInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELEOSLobbyMiniGame::execGetNowStep)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EELEOSLobbyMiniGameSteps*)Z_Param__Result=P_THIS->GetNowStep();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELEOSLobbyMiniGame::execIsSetup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSetup();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELEOSLobbyMiniGame::execOnReceivePacket)
	{
		P_GET_ENUM(EELEOSLobbyPacketType,Z_Param_InPacketType);
		P_GET_OBJECT(ULobbyPacketBase,Z_Param_InPacket);
		P_GET_OBJECT(UEOSUserBase,Z_Param_InSender);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnReceivePacket(EELEOSLobbyPacketType(Z_Param_InPacketType),Z_Param_InPacket,Z_Param_InSender);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELEOSLobbyMiniGame::execSendOwnerSelectInfo)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InNextCursor);
		P_GET_UBOOL(Z_Param_InDecide);
		P_GET_UBOOL(Z_Param_InCancel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SendOwnerSelectInfo(Z_Param_InNextCursor,Z_Param_InDecide,Z_Param_InCancel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELEOSLobbyMiniGame::execSetup)
	{
		P_GET_OBJECT(UEOSUser,Z_Param_InSelf);
		P_GET_OBJECT(UELEOSLobby,Z_Param_InELEOSLobby);
		P_GET_OBJECT(UELEOSLobbyMiniGameInfo,Z_Param_Info);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSetupComplete);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnNotify);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnOwnerSelectInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Setup(Z_Param_InSelf,Z_Param_InELEOSLobby,Z_Param_Info,FOnSetupCompleteEvent(Z_Param_OnSetupComplete),FOnMiniGameNotify(Z_Param_OnNotify),FOnMiniGameOwnerSelectInfo(Z_Param_OnOwnerSelectInfo));
		P_NATIVE_END;
	}
	void AELEOSLobbyMiniGame::StaticRegisterNativesAELEOSLobbyMiniGame()
	{
		UClass* Class = AELEOSLobbyMiniGame::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Dispose", &AELEOSLobbyMiniGame::execDispose },
			{ "GetELEOSLobbyMiniGameInfo", &AELEOSLobbyMiniGame::execGetELEOSLobbyMiniGameInfo },
			{ "GetNowStep", &AELEOSLobbyMiniGame::execGetNowStep },
			{ "IsSetup", &AELEOSLobbyMiniGame::execIsSetup },
			{ "OnReceivePacket", &AELEOSLobbyMiniGame::execOnReceivePacket },
			{ "SendOwnerSelectInfo", &AELEOSLobbyMiniGame::execSendOwnerSelectInfo },
			{ "Setup", &AELEOSLobbyMiniGame::execSetup },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELEOSLobbyMiniGame_Dispose_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEOSLobbyMiniGame_Dispose_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSLobbyMiniGame.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELEOSLobbyMiniGame_Dispose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELEOSLobbyMiniGame, nullptr, "Dispose", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELEOSLobbyMiniGame_Dispose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEOSLobbyMiniGame_Dispose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELEOSLobbyMiniGame_Dispose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELEOSLobbyMiniGame_Dispose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELEOSLobbyMiniGame_GetELEOSLobbyMiniGameInfo_Statics
	{
		struct ELEOSLobbyMiniGame_eventGetELEOSLobbyMiniGameInfo_Parms
		{
			UELEOSLobbyMiniGameInfo* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELEOSLobbyMiniGame_GetELEOSLobbyMiniGameInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSLobbyMiniGame_eventGetELEOSLobbyMiniGameInfo_Parms, ReturnValue), Z_Construct_UClass_UELEOSLobbyMiniGameInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELEOSLobbyMiniGame_GetELEOSLobbyMiniGameInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEOSLobbyMiniGame_GetELEOSLobbyMiniGameInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEOSLobbyMiniGame_GetELEOSLobbyMiniGameInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSLobbyMiniGame.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELEOSLobbyMiniGame_GetELEOSLobbyMiniGameInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELEOSLobbyMiniGame, nullptr, "GetELEOSLobbyMiniGameInfo", nullptr, nullptr, sizeof(ELEOSLobbyMiniGame_eventGetELEOSLobbyMiniGameInfo_Parms), Z_Construct_UFunction_AELEOSLobbyMiniGame_GetELEOSLobbyMiniGameInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEOSLobbyMiniGame_GetELEOSLobbyMiniGameInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELEOSLobbyMiniGame_GetELEOSLobbyMiniGameInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEOSLobbyMiniGame_GetELEOSLobbyMiniGameInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELEOSLobbyMiniGame_GetELEOSLobbyMiniGameInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELEOSLobbyMiniGame_GetELEOSLobbyMiniGameInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELEOSLobbyMiniGame_GetNowStep_Statics
	{
		struct ELEOSLobbyMiniGame_eventGetNowStep_Parms
		{
			EELEOSLobbyMiniGameSteps ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELEOSLobbyMiniGame_GetNowStep_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELEOSLobbyMiniGame_GetNowStep_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSLobbyMiniGame_eventGetNowStep_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_EELEOSLobbyMiniGameSteps, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELEOSLobbyMiniGame_GetNowStep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEOSLobbyMiniGame_GetNowStep_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEOSLobbyMiniGame_GetNowStep_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEOSLobbyMiniGame_GetNowStep_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSLobbyMiniGame.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELEOSLobbyMiniGame_GetNowStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELEOSLobbyMiniGame, nullptr, "GetNowStep", nullptr, nullptr, sizeof(ELEOSLobbyMiniGame_eventGetNowStep_Parms), Z_Construct_UFunction_AELEOSLobbyMiniGame_GetNowStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEOSLobbyMiniGame_GetNowStep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELEOSLobbyMiniGame_GetNowStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEOSLobbyMiniGame_GetNowStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELEOSLobbyMiniGame_GetNowStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELEOSLobbyMiniGame_GetNowStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELEOSLobbyMiniGame_IsSetup_Statics
	{
		struct ELEOSLobbyMiniGame_eventIsSetup_Parms
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
	void Z_Construct_UFunction_AELEOSLobbyMiniGame_IsSetup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSLobbyMiniGame_eventIsSetup_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELEOSLobbyMiniGame_IsSetup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSLobbyMiniGame_eventIsSetup_Parms), &Z_Construct_UFunction_AELEOSLobbyMiniGame_IsSetup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELEOSLobbyMiniGame_IsSetup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEOSLobbyMiniGame_IsSetup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEOSLobbyMiniGame_IsSetup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSLobbyMiniGame.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELEOSLobbyMiniGame_IsSetup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELEOSLobbyMiniGame, nullptr, "IsSetup", nullptr, nullptr, sizeof(ELEOSLobbyMiniGame_eventIsSetup_Parms), Z_Construct_UFunction_AELEOSLobbyMiniGame_IsSetup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEOSLobbyMiniGame_IsSetup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELEOSLobbyMiniGame_IsSetup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEOSLobbyMiniGame_IsSetup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELEOSLobbyMiniGame_IsSetup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELEOSLobbyMiniGame_IsSetup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELEOSLobbyMiniGame_OnReceivePacket_Statics
	{
		struct ELEOSLobbyMiniGame_eventOnReceivePacket_Parms
		{
			EELEOSLobbyPacketType InPacketType;
			ULobbyPacketBase* InPacket;
			UEOSUserBase* InSender;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InPacketType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InPacketType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InPacket;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InSender;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELEOSLobbyMiniGame_OnReceivePacket_Statics::NewProp_InPacketType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELEOSLobbyMiniGame_OnReceivePacket_Statics::NewProp_InPacketType = { "InPacketType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSLobbyMiniGame_eventOnReceivePacket_Parms, InPacketType), Z_Construct_UEnum_ABP_200508_EELEOSLobbyPacketType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELEOSLobbyMiniGame_OnReceivePacket_Statics::NewProp_InPacket = { "InPacket", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSLobbyMiniGame_eventOnReceivePacket_Parms, InPacket), Z_Construct_UClass_ULobbyPacketBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELEOSLobbyMiniGame_OnReceivePacket_Statics::NewProp_InSender = { "InSender", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSLobbyMiniGame_eventOnReceivePacket_Parms, InSender), Z_Construct_UClass_UEOSUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELEOSLobbyMiniGame_OnReceivePacket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEOSLobbyMiniGame_OnReceivePacket_Statics::NewProp_InPacketType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEOSLobbyMiniGame_OnReceivePacket_Statics::NewProp_InPacketType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEOSLobbyMiniGame_OnReceivePacket_Statics::NewProp_InPacket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEOSLobbyMiniGame_OnReceivePacket_Statics::NewProp_InSender,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEOSLobbyMiniGame_OnReceivePacket_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSLobbyMiniGame.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELEOSLobbyMiniGame_OnReceivePacket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELEOSLobbyMiniGame, nullptr, "OnReceivePacket", nullptr, nullptr, sizeof(ELEOSLobbyMiniGame_eventOnReceivePacket_Parms), Z_Construct_UFunction_AELEOSLobbyMiniGame_OnReceivePacket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEOSLobbyMiniGame_OnReceivePacket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELEOSLobbyMiniGame_OnReceivePacket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEOSLobbyMiniGame_OnReceivePacket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELEOSLobbyMiniGame_OnReceivePacket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELEOSLobbyMiniGame_OnReceivePacket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELEOSLobbyMiniGame_SendOwnerSelectInfo_Statics
	{
		struct ELEOSLobbyMiniGame_eventSendOwnerSelectInfo_Parms
		{
			int32 InNextCursor;
			bool InDecide;
			bool InCancel;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InNextCursor;
		static void NewProp_InDecide_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InDecide;
		static void NewProp_InCancel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InCancel;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELEOSLobbyMiniGame_SendOwnerSelectInfo_Statics::NewProp_InNextCursor = { "InNextCursor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSLobbyMiniGame_eventSendOwnerSelectInfo_Parms, InNextCursor), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELEOSLobbyMiniGame_SendOwnerSelectInfo_Statics::NewProp_InDecide_SetBit(void* Obj)
	{
		((ELEOSLobbyMiniGame_eventSendOwnerSelectInfo_Parms*)Obj)->InDecide = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELEOSLobbyMiniGame_SendOwnerSelectInfo_Statics::NewProp_InDecide = { "InDecide", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSLobbyMiniGame_eventSendOwnerSelectInfo_Parms), &Z_Construct_UFunction_AELEOSLobbyMiniGame_SendOwnerSelectInfo_Statics::NewProp_InDecide_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELEOSLobbyMiniGame_SendOwnerSelectInfo_Statics::NewProp_InCancel_SetBit(void* Obj)
	{
		((ELEOSLobbyMiniGame_eventSendOwnerSelectInfo_Parms*)Obj)->InCancel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELEOSLobbyMiniGame_SendOwnerSelectInfo_Statics::NewProp_InCancel = { "InCancel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSLobbyMiniGame_eventSendOwnerSelectInfo_Parms), &Z_Construct_UFunction_AELEOSLobbyMiniGame_SendOwnerSelectInfo_Statics::NewProp_InCancel_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELEOSLobbyMiniGame_SendOwnerSelectInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSLobbyMiniGame_eventSendOwnerSelectInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELEOSLobbyMiniGame_SendOwnerSelectInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSLobbyMiniGame_eventSendOwnerSelectInfo_Parms), &Z_Construct_UFunction_AELEOSLobbyMiniGame_SendOwnerSelectInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELEOSLobbyMiniGame_SendOwnerSelectInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEOSLobbyMiniGame_SendOwnerSelectInfo_Statics::NewProp_InNextCursor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEOSLobbyMiniGame_SendOwnerSelectInfo_Statics::NewProp_InDecide,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEOSLobbyMiniGame_SendOwnerSelectInfo_Statics::NewProp_InCancel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEOSLobbyMiniGame_SendOwnerSelectInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEOSLobbyMiniGame_SendOwnerSelectInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSLobbyMiniGame.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELEOSLobbyMiniGame_SendOwnerSelectInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELEOSLobbyMiniGame, nullptr, "SendOwnerSelectInfo", nullptr, nullptr, sizeof(ELEOSLobbyMiniGame_eventSendOwnerSelectInfo_Parms), Z_Construct_UFunction_AELEOSLobbyMiniGame_SendOwnerSelectInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEOSLobbyMiniGame_SendOwnerSelectInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELEOSLobbyMiniGame_SendOwnerSelectInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEOSLobbyMiniGame_SendOwnerSelectInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELEOSLobbyMiniGame_SendOwnerSelectInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELEOSLobbyMiniGame_SendOwnerSelectInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELEOSLobbyMiniGame_Setup_Statics
	{
		struct ELEOSLobbyMiniGame_eventSetup_Parms
		{
			UEOSUser* InSelf;
			UELEOSLobby* InELEOSLobby;
			UELEOSLobbyMiniGameInfo* Info;
			FScriptDelegate OnSetupComplete;
			FScriptDelegate OnNotify;
			FScriptDelegate OnOwnerSelectInfo;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InSelf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InELEOSLobby;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Info;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSetupComplete;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnNotify;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnOwnerSelectInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELEOSLobbyMiniGame_Setup_Statics::NewProp_InSelf = { "InSelf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSLobbyMiniGame_eventSetup_Parms, InSelf), Z_Construct_UClass_UEOSUser_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELEOSLobbyMiniGame_Setup_Statics::NewProp_InELEOSLobby = { "InELEOSLobby", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSLobbyMiniGame_eventSetup_Parms, InELEOSLobby), Z_Construct_UClass_UELEOSLobby_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELEOSLobbyMiniGame_Setup_Statics::NewProp_Info = { "Info", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSLobbyMiniGame_eventSetup_Parms, Info), Z_Construct_UClass_UELEOSLobbyMiniGameInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_AELEOSLobbyMiniGame_Setup_Statics::NewProp_OnSetupComplete = { "OnSetupComplete", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSLobbyMiniGame_eventSetup_Parms, OnSetupComplete), Z_Construct_UDelegateFunction_ABP_200508_OnSetupCompleteEvent__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_AELEOSLobbyMiniGame_Setup_Statics::NewProp_OnNotify = { "OnNotify", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSLobbyMiniGame_eventSetup_Parms, OnNotify), Z_Construct_UDelegateFunction_ABP_200508_OnMiniGameNotify__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_AELEOSLobbyMiniGame_Setup_Statics::NewProp_OnOwnerSelectInfo = { "OnOwnerSelectInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSLobbyMiniGame_eventSetup_Parms, OnOwnerSelectInfo), Z_Construct_UDelegateFunction_ABP_200508_OnMiniGameOwnerSelectInfo__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELEOSLobbyMiniGame_Setup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSLobbyMiniGame_eventSetup_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELEOSLobbyMiniGame_Setup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSLobbyMiniGame_eventSetup_Parms), &Z_Construct_UFunction_AELEOSLobbyMiniGame_Setup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELEOSLobbyMiniGame_Setup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEOSLobbyMiniGame_Setup_Statics::NewProp_InSelf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEOSLobbyMiniGame_Setup_Statics::NewProp_InELEOSLobby,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEOSLobbyMiniGame_Setup_Statics::NewProp_Info,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEOSLobbyMiniGame_Setup_Statics::NewProp_OnSetupComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEOSLobbyMiniGame_Setup_Statics::NewProp_OnNotify,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEOSLobbyMiniGame_Setup_Statics::NewProp_OnOwnerSelectInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEOSLobbyMiniGame_Setup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEOSLobbyMiniGame_Setup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSLobbyMiniGame.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELEOSLobbyMiniGame_Setup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELEOSLobbyMiniGame, nullptr, "Setup", nullptr, nullptr, sizeof(ELEOSLobbyMiniGame_eventSetup_Parms), Z_Construct_UFunction_AELEOSLobbyMiniGame_Setup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEOSLobbyMiniGame_Setup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELEOSLobbyMiniGame_Setup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEOSLobbyMiniGame_Setup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELEOSLobbyMiniGame_Setup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELEOSLobbyMiniGame_Setup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELEOSLobbyMiniGame_NoRegister()
	{
		return AELEOSLobbyMiniGame::StaticClass();
	}
	struct Z_Construct_UClass_AELEOSLobbyMiniGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSetup_MetaData[];
#endif
		static void NewProp_bSetup_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSetup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelfPUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SelfPUID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ELEOSLobby_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ELEOSLobby;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Step_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Step_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Step;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ELEOSLobbyMiniGameInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ELEOSLobbyMiniGameInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestMiniGameInfoTimerHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RequestMiniGameInfoTimerHandle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestMiniGameMemberStepsTimerHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RequestMiniGameMemberStepsTimerHandle;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MemberSteps_ValueProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MemberSteps_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MemberSteps_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemberSteps_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_MemberSteps;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSetupCompleteEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSetupCompleteEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMiniGameOwnerSelectInfoEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnMiniGameOwnerSelectInfoEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMiniGameNotifyEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnMiniGameNotifyEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELEOSLobbyMiniGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELEOSLobbyMiniGame_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELEOSLobbyMiniGame_Dispose, "Dispose" }, // 2255922092
		{ &Z_Construct_UFunction_AELEOSLobbyMiniGame_GetELEOSLobbyMiniGameInfo, "GetELEOSLobbyMiniGameInfo" }, // 2895994317
		{ &Z_Construct_UFunction_AELEOSLobbyMiniGame_GetNowStep, "GetNowStep" }, // 1641892664
		{ &Z_Construct_UFunction_AELEOSLobbyMiniGame_IsSetup, "IsSetup" }, // 2491403410
		{ &Z_Construct_UFunction_AELEOSLobbyMiniGame_OnReceivePacket, "OnReceivePacket" }, // 3999922592
		{ &Z_Construct_UFunction_AELEOSLobbyMiniGame_SendOwnerSelectInfo, "SendOwnerSelectInfo" }, // 1743154839
		{ &Z_Construct_UFunction_AELEOSLobbyMiniGame_Setup, "Setup" }, // 2919487042
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELEOSLobbyMiniGame_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELEOSLobbyMiniGame.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELEOSLobbyMiniGame.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELEOSLobbyMiniGame_Statics::NewProp_bSetup_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSLobbyMiniGame" },
		{ "ModuleRelativePath", "Public/ELEOSLobbyMiniGame.h" },
	};
#endif
	void Z_Construct_UClass_AELEOSLobbyMiniGame_Statics::NewProp_bSetup_SetBit(void* Obj)
	{
		((AELEOSLobbyMiniGame*)Obj)->bSetup = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELEOSLobbyMiniGame_Statics::NewProp_bSetup = { "bSetup", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELEOSLobbyMiniGame), &Z_Construct_UClass_AELEOSLobbyMiniGame_Statics::NewProp_bSetup_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELEOSLobbyMiniGame_Statics::NewProp_bSetup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELEOSLobbyMiniGame_Statics::NewProp_bSetup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELEOSLobbyMiniGame_Statics::NewProp_SelfPUID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSLobbyMiniGame" },
		{ "ModuleRelativePath", "Public/ELEOSLobbyMiniGame.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AELEOSLobbyMiniGame_Statics::NewProp_SelfPUID = { "SelfPUID", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELEOSLobbyMiniGame, SelfPUID), METADATA_PARAMS(Z_Construct_UClass_AELEOSLobbyMiniGame_Statics::NewProp_SelfPUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELEOSLobbyMiniGame_Statics::NewProp_SelfPUID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELEOSLobbyMiniGame_Statics::NewProp_ELEOSLobby_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSLobbyMiniGame" },
		{ "ModuleRelativePath", "Public/ELEOSLobbyMiniGame.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELEOSLobbyMiniGame_Statics::NewProp_ELEOSLobby = { "ELEOSLobby", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELEOSLobbyMiniGame, ELEOSLobby), Z_Construct_UClass_UELEOSLobby_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELEOSLobbyMiniGame_Statics::NewProp_ELEOSLobby_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELEOSLobbyMiniGame_Statics::NewProp_ELEOSLobby_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AELEOSLobbyMiniGame_Statics::NewProp_Step_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELEOSLobbyMiniGame_Statics::NewProp_Step_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSLobbyMiniGame" },
		{ "ModuleRelativePath", "Public/ELEOSLobbyMiniGame.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AELEOSLobbyMiniGame_Statics::NewProp_Step = { "Step", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELEOSLobbyMiniGame, Step), Z_Construct_UEnum_ABP_200508_EELEOSLobbyMiniGameSteps, METADATA_PARAMS(Z_Construct_UClass_AELEOSLobbyMiniGame_Statics::NewProp_Step_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELEOSLobbyMiniGame_Statics::NewProp_Step_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELEOSLobbyMiniGame_Statics::NewProp_ELEOSLobbyMiniGameInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSLobbyMiniGame" },
		{ "ModuleRelativePath", "Public/ELEOSLobbyMiniGame.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELEOSLobbyMiniGame_Statics::NewProp_ELEOSLobbyMiniGameInfo = { "ELEOSLobbyMiniGameInfo", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELEOSLobbyMiniGame, ELEOSLobbyMiniGameInfo), Z_Construct_UClass_UELEOSLobbyMiniGameInfo_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELEOSLobbyMiniGame_Statics::NewProp_ELEOSLobbyMiniGameInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELEOSLobbyMiniGame_Statics::NewProp_ELEOSLobbyMiniGameInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELEOSLobbyMiniGame_Statics::NewProp_RequestMiniGameInfoTimerHandle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSLobbyMiniGame" },
		{ "ModuleRelativePath", "Public/ELEOSLobbyMiniGame.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELEOSLobbyMiniGame_Statics::NewProp_RequestMiniGameInfoTimerHandle = { "RequestMiniGameInfoTimerHandle", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELEOSLobbyMiniGame, RequestMiniGameInfoTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_AELEOSLobbyMiniGame_Statics::NewProp_RequestMiniGameInfoTimerHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELEOSLobbyMiniGame_Statics::NewProp_RequestMiniGameInfoTimerHandle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELEOSLobbyMiniGame_Statics::NewProp_RequestMiniGameMemberStepsTimerHandle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSLobbyMiniGame" },
		{ "ModuleRelativePath", "Public/ELEOSLobbyMiniGame.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELEOSLobbyMiniGame_Statics::NewProp_RequestMiniGameMemberStepsTimerHandle = { "RequestMiniGameMemberStepsTimerHandle", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELEOSLobbyMiniGame, RequestMiniGameMemberStepsTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_AELEOSLobbyMiniGame_Statics::NewProp_RequestMiniGameMemberStepsTimerHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELEOSLobbyMiniGame_Statics::NewProp_RequestMiniGameMemberStepsTimerHandle_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AELEOSLobbyMiniGame_Statics::NewProp_MemberSteps_ValueProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AELEOSLobbyMiniGame_Statics::NewProp_MemberSteps_ValueProp = { "MemberSteps", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UEnum_ABP_200508_EELEOSLobbyMiniGameSteps, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AELEOSLobbyMiniGame_Statics::NewProp_MemberSteps_Key_KeyProp = { "MemberSteps_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELEOSLobbyMiniGame_Statics::NewProp_MemberSteps_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSLobbyMiniGame" },
		{ "ModuleRelativePath", "Public/ELEOSLobbyMiniGame.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AELEOSLobbyMiniGame_Statics::NewProp_MemberSteps = { "MemberSteps", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELEOSLobbyMiniGame, MemberSteps), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELEOSLobbyMiniGame_Statics::NewProp_MemberSteps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELEOSLobbyMiniGame_Statics::NewProp_MemberSteps_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELEOSLobbyMiniGame_Statics::NewProp_OnSetupCompleteEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSLobbyMiniGame" },
		{ "ModuleRelativePath", "Public/ELEOSLobbyMiniGame.h" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_AELEOSLobbyMiniGame_Statics::NewProp_OnSetupCompleteEvent = { "OnSetupCompleteEvent", nullptr, (EPropertyFlags)0x0040000000080005, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELEOSLobbyMiniGame, OnSetupCompleteEvent), Z_Construct_UDelegateFunction_ABP_200508_OnSetupCompleteEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AELEOSLobbyMiniGame_Statics::NewProp_OnSetupCompleteEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELEOSLobbyMiniGame_Statics::NewProp_OnSetupCompleteEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELEOSLobbyMiniGame_Statics::NewProp_OnMiniGameOwnerSelectInfoEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSLobbyMiniGame" },
		{ "ModuleRelativePath", "Public/ELEOSLobbyMiniGame.h" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_AELEOSLobbyMiniGame_Statics::NewProp_OnMiniGameOwnerSelectInfoEvent = { "OnMiniGameOwnerSelectInfoEvent", nullptr, (EPropertyFlags)0x0040000000080005, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELEOSLobbyMiniGame, OnMiniGameOwnerSelectInfoEvent), Z_Construct_UDelegateFunction_ABP_200508_OnMiniGameOwnerSelectInfo__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AELEOSLobbyMiniGame_Statics::NewProp_OnMiniGameOwnerSelectInfoEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELEOSLobbyMiniGame_Statics::NewProp_OnMiniGameOwnerSelectInfoEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELEOSLobbyMiniGame_Statics::NewProp_OnMiniGameNotifyEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSLobbyMiniGame" },
		{ "ModuleRelativePath", "Public/ELEOSLobbyMiniGame.h" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_AELEOSLobbyMiniGame_Statics::NewProp_OnMiniGameNotifyEvent = { "OnMiniGameNotifyEvent", nullptr, (EPropertyFlags)0x0040000000080005, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELEOSLobbyMiniGame, OnMiniGameNotifyEvent), Z_Construct_UDelegateFunction_ABP_200508_OnMiniGameNotify__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AELEOSLobbyMiniGame_Statics::NewProp_OnMiniGameNotifyEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELEOSLobbyMiniGame_Statics::NewProp_OnMiniGameNotifyEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELEOSLobbyMiniGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEOSLobbyMiniGame_Statics::NewProp_bSetup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEOSLobbyMiniGame_Statics::NewProp_SelfPUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEOSLobbyMiniGame_Statics::NewProp_ELEOSLobby,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEOSLobbyMiniGame_Statics::NewProp_Step_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEOSLobbyMiniGame_Statics::NewProp_Step,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEOSLobbyMiniGame_Statics::NewProp_ELEOSLobbyMiniGameInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEOSLobbyMiniGame_Statics::NewProp_RequestMiniGameInfoTimerHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEOSLobbyMiniGame_Statics::NewProp_RequestMiniGameMemberStepsTimerHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEOSLobbyMiniGame_Statics::NewProp_MemberSteps_ValueProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEOSLobbyMiniGame_Statics::NewProp_MemberSteps_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEOSLobbyMiniGame_Statics::NewProp_MemberSteps_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEOSLobbyMiniGame_Statics::NewProp_MemberSteps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEOSLobbyMiniGame_Statics::NewProp_OnSetupCompleteEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEOSLobbyMiniGame_Statics::NewProp_OnMiniGameOwnerSelectInfoEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEOSLobbyMiniGame_Statics::NewProp_OnMiniGameNotifyEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELEOSLobbyMiniGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELEOSLobbyMiniGame>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELEOSLobbyMiniGame_Statics::ClassParams = {
		&AELEOSLobbyMiniGame::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELEOSLobbyMiniGame_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELEOSLobbyMiniGame_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELEOSLobbyMiniGame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELEOSLobbyMiniGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELEOSLobbyMiniGame()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELEOSLobbyMiniGame_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELEOSLobbyMiniGame, 2651884181);
	template<> ABP_200508_API UClass* StaticClass<AELEOSLobbyMiniGame>()
	{
		return AELEOSLobbyMiniGame::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELEOSLobbyMiniGame(Z_Construct_UClass_AELEOSLobbyMiniGame, &AELEOSLobbyMiniGame::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELEOSLobbyMiniGame"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELEOSLobbyMiniGame);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
