// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELEOSVoiceChatUtility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELEOSVoiceChatUtility() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELEOSVoiceChatUtility_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELEOSVoiceChatUtility();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSLobbyUserMuteFlag();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSCommunityUserBase_NoRegister();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSLobbyUserAudioStatus();
// End Cross Module References
	DEFINE_FUNCTION(UELEOSVoiceChatUtility::execBlockVoiceChat)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_ProductUserID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELEOSVoiceChatUtility::BlockVoiceChat(Z_Param_WorldContextObject,Z_Param_ProductUserID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSVoiceChatUtility::execClearVoiceChatMuteAll)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(EEOSLobbyUserMuteFlag,Z_Param_Flag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELEOSVoiceChatUtility::ClearVoiceChatMuteAll(Z_Param_WorldContextObject,EEOSLobbyUserMuteFlag(Z_Param_Flag));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSVoiceChatUtility::execClearVoiceChatMuteFlag)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_ProductUserID);
		P_GET_ENUM(EEOSLobbyUserMuteFlag,Z_Param_Flag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELEOSVoiceChatUtility::ClearVoiceChatMuteFlag(Z_Param_WorldContextObject,Z_Param_ProductUserID,EEOSLobbyUserMuteFlag(Z_Param_Flag));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSVoiceChatUtility::execGetVoiceChatEnabled)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELEOSVoiceChatUtility::GetVoiceChatEnabled(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSVoiceChatUtility::execGetVoiceChatMuteFlag)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_ProductUserID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EEOSLobbyUserMuteFlag*)Z_Param__Result=UELEOSVoiceChatUtility::GetVoiceChatMuteFlag(Z_Param_WorldContextObject,Z_Param_ProductUserID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSVoiceChatUtility::execGetVoiceChatSpeakingUsers)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT_REF(UEOSCommunityInfoBase,Z_Param_Out_EOSCommunityInfo);
		P_GET_TARRAY_REF(UEOSCommunityUserBase*,Z_Param_Out_SpeakingUsers);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELEOSVoiceChatUtility::GetVoiceChatSpeakingUsers(Z_Param_WorldContextObject,Z_Param_Out_EOSCommunityInfo,Z_Param_Out_SpeakingUsers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSVoiceChatUtility::execGetVoiceChatStartMuted)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELEOSVoiceChatUtility::GetVoiceChatStartMuted(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSVoiceChatUtility::execGetVoiceChatStatus)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_ProductUserID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EEOSLobbyUserAudioStatus*)Z_Param__Result=UELEOSVoiceChatUtility::GetVoiceChatStatus(Z_Param_WorldContextObject,Z_Param_ProductUserID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSVoiceChatUtility::execIsVoiceChatBlocked)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_ProductUserID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELEOSVoiceChatUtility::IsVoiceChatBlocked(Z_Param_WorldContextObject,Z_Param_ProductUserID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSVoiceChatUtility::execIsVoiceChatMuted)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_ProductUserID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELEOSVoiceChatUtility::IsVoiceChatMuted(Z_Param_WorldContextObject,Z_Param_ProductUserID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSVoiceChatUtility::execIsVoiceChatSpeaking)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_ProductUserID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELEOSVoiceChatUtility::IsVoiceChatSpeaking(Z_Param_WorldContextObject,Z_Param_ProductUserID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSVoiceChatUtility::execMuteVoiceChat)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_ProductUserID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELEOSVoiceChatUtility::MuteVoiceChat(Z_Param_WorldContextObject,Z_Param_ProductUserID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSVoiceChatUtility::execSetVoiceChatEnabled)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_UBOOL(Z_Param__bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELEOSVoiceChatUtility::SetVoiceChatEnabled(Z_Param_WorldContextObject,Z_Param__bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSVoiceChatUtility::execSetVoiceChatMuteAll)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(EEOSLobbyUserMuteFlag,Z_Param_Flag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELEOSVoiceChatUtility::SetVoiceChatMuteAll(Z_Param_WorldContextObject,EEOSLobbyUserMuteFlag(Z_Param_Flag));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSVoiceChatUtility::execSetVoiceChatMuteFlag)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_ProductUserID);
		P_GET_ENUM(EEOSLobbyUserMuteFlag,Z_Param_Flag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELEOSVoiceChatUtility::SetVoiceChatMuteFlag(Z_Param_WorldContextObject,Z_Param_ProductUserID,EEOSLobbyUserMuteFlag(Z_Param_Flag));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSVoiceChatUtility::execSetVoiceChatStartMuted)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_UBOOL(Z_Param__bMuted);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELEOSVoiceChatUtility::SetVoiceChatStartMuted(Z_Param_WorldContextObject,Z_Param__bMuted);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSVoiceChatUtility::execUnblockVoiceChat)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_ProductUserID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELEOSVoiceChatUtility::UnblockVoiceChat(Z_Param_WorldContextObject,Z_Param_ProductUserID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSVoiceChatUtility::execUnmuteVoiceChat)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_ProductUserID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELEOSVoiceChatUtility::UnmuteVoiceChat(Z_Param_WorldContextObject,Z_Param_ProductUserID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSVoiceChatUtility::execUpdateVoiceMutedAllMembers)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELEOSVoiceChatUtility::UpdateVoiceMutedAllMembers(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void UELEOSVoiceChatUtility::StaticRegisterNativesUELEOSVoiceChatUtility()
	{
		UClass* Class = UELEOSVoiceChatUtility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BlockVoiceChat", &UELEOSVoiceChatUtility::execBlockVoiceChat },
			{ "ClearVoiceChatMuteAll", &UELEOSVoiceChatUtility::execClearVoiceChatMuteAll },
			{ "ClearVoiceChatMuteFlag", &UELEOSVoiceChatUtility::execClearVoiceChatMuteFlag },
			{ "GetVoiceChatEnabled", &UELEOSVoiceChatUtility::execGetVoiceChatEnabled },
			{ "GetVoiceChatMuteFlag", &UELEOSVoiceChatUtility::execGetVoiceChatMuteFlag },
			{ "GetVoiceChatSpeakingUsers", &UELEOSVoiceChatUtility::execGetVoiceChatSpeakingUsers },
			{ "GetVoiceChatStartMuted", &UELEOSVoiceChatUtility::execGetVoiceChatStartMuted },
			{ "GetVoiceChatStatus", &UELEOSVoiceChatUtility::execGetVoiceChatStatus },
			{ "IsVoiceChatBlocked", &UELEOSVoiceChatUtility::execIsVoiceChatBlocked },
			{ "IsVoiceChatMuted", &UELEOSVoiceChatUtility::execIsVoiceChatMuted },
			{ "IsVoiceChatSpeaking", &UELEOSVoiceChatUtility::execIsVoiceChatSpeaking },
			{ "MuteVoiceChat", &UELEOSVoiceChatUtility::execMuteVoiceChat },
			{ "SetVoiceChatEnabled", &UELEOSVoiceChatUtility::execSetVoiceChatEnabled },
			{ "SetVoiceChatMuteAll", &UELEOSVoiceChatUtility::execSetVoiceChatMuteAll },
			{ "SetVoiceChatMuteFlag", &UELEOSVoiceChatUtility::execSetVoiceChatMuteFlag },
			{ "SetVoiceChatStartMuted", &UELEOSVoiceChatUtility::execSetVoiceChatStartMuted },
			{ "UnblockVoiceChat", &UELEOSVoiceChatUtility::execUnblockVoiceChat },
			{ "UnmuteVoiceChat", &UELEOSVoiceChatUtility::execUnmuteVoiceChat },
			{ "UpdateVoiceMutedAllMembers", &UELEOSVoiceChatUtility::execUpdateVoiceMutedAllMembers },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELEOSVoiceChatUtility_BlockVoiceChat_Statics
	{
		struct ELEOSVoiceChatUtility_eventBlockVoiceChat_Parms
		{
			const UObject* WorldContextObject;
			FString ProductUserID;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProductUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProductUserID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSVoiceChatUtility_BlockVoiceChat_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSVoiceChatUtility_BlockVoiceChat_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSVoiceChatUtility_eventBlockVoiceChat_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSVoiceChatUtility_BlockVoiceChat_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSVoiceChatUtility_BlockVoiceChat_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSVoiceChatUtility_BlockVoiceChat_Statics::NewProp_ProductUserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEOSVoiceChatUtility_BlockVoiceChat_Statics::NewProp_ProductUserID = { "ProductUserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSVoiceChatUtility_eventBlockVoiceChat_Parms, ProductUserID), METADATA_PARAMS(Z_Construct_UFunction_UELEOSVoiceChatUtility_BlockVoiceChat_Statics::NewProp_ProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSVoiceChatUtility_BlockVoiceChat_Statics::NewProp_ProductUserID_MetaData)) };
	void Z_Construct_UFunction_UELEOSVoiceChatUtility_BlockVoiceChat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSVoiceChatUtility_eventBlockVoiceChat_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSVoiceChatUtility_BlockVoiceChat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSVoiceChatUtility_eventBlockVoiceChat_Parms), &Z_Construct_UFunction_UELEOSVoiceChatUtility_BlockVoiceChat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSVoiceChatUtility_BlockVoiceChat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSVoiceChatUtility_BlockVoiceChat_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSVoiceChatUtility_BlockVoiceChat_Statics::NewProp_ProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSVoiceChatUtility_BlockVoiceChat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSVoiceChatUtility_BlockVoiceChat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSVoiceChatUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSVoiceChatUtility_BlockVoiceChat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSVoiceChatUtility, nullptr, "BlockVoiceChat", nullptr, nullptr, sizeof(ELEOSVoiceChatUtility_eventBlockVoiceChat_Parms), Z_Construct_UFunction_UELEOSVoiceChatUtility_BlockVoiceChat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSVoiceChatUtility_BlockVoiceChat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSVoiceChatUtility_BlockVoiceChat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSVoiceChatUtility_BlockVoiceChat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSVoiceChatUtility_BlockVoiceChat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSVoiceChatUtility_BlockVoiceChat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSVoiceChatUtility_ClearVoiceChatMuteAll_Statics
	{
		struct ELEOSVoiceChatUtility_eventClearVoiceChatMuteAll_Parms
		{
			const UObject* WorldContextObject;
			EEOSLobbyUserMuteFlag Flag;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Flag_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Flag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSVoiceChatUtility_ClearVoiceChatMuteAll_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSVoiceChatUtility_ClearVoiceChatMuteAll_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSVoiceChatUtility_eventClearVoiceChatMuteAll_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSVoiceChatUtility_ClearVoiceChatMuteAll_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSVoiceChatUtility_ClearVoiceChatMuteAll_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELEOSVoiceChatUtility_ClearVoiceChatMuteAll_Statics::NewProp_Flag_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELEOSVoiceChatUtility_ClearVoiceChatMuteAll_Statics::NewProp_Flag = { "Flag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSVoiceChatUtility_eventClearVoiceChatMuteAll_Parms, Flag), Z_Construct_UEnum_yEOSSDK_EEOSLobbyUserMuteFlag, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELEOSVoiceChatUtility_ClearVoiceChatMuteAll_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSVoiceChatUtility_eventClearVoiceChatMuteAll_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSVoiceChatUtility_ClearVoiceChatMuteAll_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSVoiceChatUtility_eventClearVoiceChatMuteAll_Parms), &Z_Construct_UFunction_UELEOSVoiceChatUtility_ClearVoiceChatMuteAll_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSVoiceChatUtility_ClearVoiceChatMuteAll_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSVoiceChatUtility_ClearVoiceChatMuteAll_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSVoiceChatUtility_ClearVoiceChatMuteAll_Statics::NewProp_Flag_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSVoiceChatUtility_ClearVoiceChatMuteAll_Statics::NewProp_Flag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSVoiceChatUtility_ClearVoiceChatMuteAll_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSVoiceChatUtility_ClearVoiceChatMuteAll_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSVoiceChatUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSVoiceChatUtility_ClearVoiceChatMuteAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSVoiceChatUtility, nullptr, "ClearVoiceChatMuteAll", nullptr, nullptr, sizeof(ELEOSVoiceChatUtility_eventClearVoiceChatMuteAll_Parms), Z_Construct_UFunction_UELEOSVoiceChatUtility_ClearVoiceChatMuteAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSVoiceChatUtility_ClearVoiceChatMuteAll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSVoiceChatUtility_ClearVoiceChatMuteAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSVoiceChatUtility_ClearVoiceChatMuteAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSVoiceChatUtility_ClearVoiceChatMuteAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSVoiceChatUtility_ClearVoiceChatMuteAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSVoiceChatUtility_ClearVoiceChatMuteFlag_Statics
	{
		struct ELEOSVoiceChatUtility_eventClearVoiceChatMuteFlag_Parms
		{
			const UObject* WorldContextObject;
			FString ProductUserID;
			EEOSLobbyUserMuteFlag Flag;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProductUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProductUserID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Flag_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Flag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSVoiceChatUtility_ClearVoiceChatMuteFlag_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSVoiceChatUtility_ClearVoiceChatMuteFlag_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSVoiceChatUtility_eventClearVoiceChatMuteFlag_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSVoiceChatUtility_ClearVoiceChatMuteFlag_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSVoiceChatUtility_ClearVoiceChatMuteFlag_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSVoiceChatUtility_ClearVoiceChatMuteFlag_Statics::NewProp_ProductUserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEOSVoiceChatUtility_ClearVoiceChatMuteFlag_Statics::NewProp_ProductUserID = { "ProductUserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSVoiceChatUtility_eventClearVoiceChatMuteFlag_Parms, ProductUserID), METADATA_PARAMS(Z_Construct_UFunction_UELEOSVoiceChatUtility_ClearVoiceChatMuteFlag_Statics::NewProp_ProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSVoiceChatUtility_ClearVoiceChatMuteFlag_Statics::NewProp_ProductUserID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELEOSVoiceChatUtility_ClearVoiceChatMuteFlag_Statics::NewProp_Flag_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELEOSVoiceChatUtility_ClearVoiceChatMuteFlag_Statics::NewProp_Flag = { "Flag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSVoiceChatUtility_eventClearVoiceChatMuteFlag_Parms, Flag), Z_Construct_UEnum_yEOSSDK_EEOSLobbyUserMuteFlag, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELEOSVoiceChatUtility_ClearVoiceChatMuteFlag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSVoiceChatUtility_eventClearVoiceChatMuteFlag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSVoiceChatUtility_ClearVoiceChatMuteFlag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSVoiceChatUtility_eventClearVoiceChatMuteFlag_Parms), &Z_Construct_UFunction_UELEOSVoiceChatUtility_ClearVoiceChatMuteFlag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSVoiceChatUtility_ClearVoiceChatMuteFlag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSVoiceChatUtility_ClearVoiceChatMuteFlag_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSVoiceChatUtility_ClearVoiceChatMuteFlag_Statics::NewProp_ProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSVoiceChatUtility_ClearVoiceChatMuteFlag_Statics::NewProp_Flag_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSVoiceChatUtility_ClearVoiceChatMuteFlag_Statics::NewProp_Flag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSVoiceChatUtility_ClearVoiceChatMuteFlag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSVoiceChatUtility_ClearVoiceChatMuteFlag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSVoiceChatUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSVoiceChatUtility_ClearVoiceChatMuteFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSVoiceChatUtility, nullptr, "ClearVoiceChatMuteFlag", nullptr, nullptr, sizeof(ELEOSVoiceChatUtility_eventClearVoiceChatMuteFlag_Parms), Z_Construct_UFunction_UELEOSVoiceChatUtility_ClearVoiceChatMuteFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSVoiceChatUtility_ClearVoiceChatMuteFlag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSVoiceChatUtility_ClearVoiceChatMuteFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSVoiceChatUtility_ClearVoiceChatMuteFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSVoiceChatUtility_ClearVoiceChatMuteFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSVoiceChatUtility_ClearVoiceChatMuteFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatEnabled_Statics
	{
		struct ELEOSVoiceChatUtility_eventGetVoiceChatEnabled_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatEnabled_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatEnabled_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSVoiceChatUtility_eventGetVoiceChatEnabled_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatEnabled_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatEnabled_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSVoiceChatUtility_eventGetVoiceChatEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSVoiceChatUtility_eventGetVoiceChatEnabled_Parms), &Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatEnabled_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSVoiceChatUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSVoiceChatUtility, nullptr, "GetVoiceChatEnabled", nullptr, nullptr, sizeof(ELEOSVoiceChatUtility_eventGetVoiceChatEnabled_Parms), Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatMuteFlag_Statics
	{
		struct ELEOSVoiceChatUtility_eventGetVoiceChatMuteFlag_Parms
		{
			const UObject* WorldContextObject;
			FString ProductUserID;
			EEOSLobbyUserMuteFlag ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProductUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProductUserID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatMuteFlag_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatMuteFlag_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSVoiceChatUtility_eventGetVoiceChatMuteFlag_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatMuteFlag_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatMuteFlag_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatMuteFlag_Statics::NewProp_ProductUserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatMuteFlag_Statics::NewProp_ProductUserID = { "ProductUserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSVoiceChatUtility_eventGetVoiceChatMuteFlag_Parms, ProductUserID), METADATA_PARAMS(Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatMuteFlag_Statics::NewProp_ProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatMuteFlag_Statics::NewProp_ProductUserID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatMuteFlag_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatMuteFlag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSVoiceChatUtility_eventGetVoiceChatMuteFlag_Parms, ReturnValue), Z_Construct_UEnum_yEOSSDK_EEOSLobbyUserMuteFlag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatMuteFlag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatMuteFlag_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatMuteFlag_Statics::NewProp_ProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatMuteFlag_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatMuteFlag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatMuteFlag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSVoiceChatUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatMuteFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSVoiceChatUtility, nullptr, "GetVoiceChatMuteFlag", nullptr, nullptr, sizeof(ELEOSVoiceChatUtility_eventGetVoiceChatMuteFlag_Parms), Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatMuteFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatMuteFlag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatMuteFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatMuteFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatMuteFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatMuteFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatSpeakingUsers_Statics
	{
		struct ELEOSVoiceChatUtility_eventGetVoiceChatSpeakingUsers_Parms
		{
			const UObject* WorldContextObject;
			UEOSCommunityInfoBase* EOSCommunityInfo;
			TArray<UEOSCommunityUserBase*> SpeakingUsers;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EOSCommunityInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpeakingUsers_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpeakingUsers;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatSpeakingUsers_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatSpeakingUsers_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSVoiceChatUtility_eventGetVoiceChatSpeakingUsers_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatSpeakingUsers_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatSpeakingUsers_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatSpeakingUsers_Statics::NewProp_EOSCommunityInfo = { "EOSCommunityInfo", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSVoiceChatUtility_eventGetVoiceChatSpeakingUsers_Parms, EOSCommunityInfo), Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatSpeakingUsers_Statics::NewProp_SpeakingUsers_Inner = { "SpeakingUsers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UEOSCommunityUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatSpeakingUsers_Statics::NewProp_SpeakingUsers = { "SpeakingUsers", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSVoiceChatUtility_eventGetVoiceChatSpeakingUsers_Parms, SpeakingUsers), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatSpeakingUsers_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSVoiceChatUtility_eventGetVoiceChatSpeakingUsers_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatSpeakingUsers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSVoiceChatUtility_eventGetVoiceChatSpeakingUsers_Parms), &Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatSpeakingUsers_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatSpeakingUsers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatSpeakingUsers_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatSpeakingUsers_Statics::NewProp_EOSCommunityInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatSpeakingUsers_Statics::NewProp_SpeakingUsers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatSpeakingUsers_Statics::NewProp_SpeakingUsers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatSpeakingUsers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatSpeakingUsers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSVoiceChatUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatSpeakingUsers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSVoiceChatUtility, nullptr, "GetVoiceChatSpeakingUsers", nullptr, nullptr, sizeof(ELEOSVoiceChatUtility_eventGetVoiceChatSpeakingUsers_Parms), Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatSpeakingUsers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatSpeakingUsers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatSpeakingUsers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatSpeakingUsers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatSpeakingUsers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatSpeakingUsers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatStartMuted_Statics
	{
		struct ELEOSVoiceChatUtility_eventGetVoiceChatStartMuted_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatStartMuted_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatStartMuted_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSVoiceChatUtility_eventGetVoiceChatStartMuted_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatStartMuted_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatStartMuted_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatStartMuted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSVoiceChatUtility_eventGetVoiceChatStartMuted_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatStartMuted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSVoiceChatUtility_eventGetVoiceChatStartMuted_Parms), &Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatStartMuted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatStartMuted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatStartMuted_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatStartMuted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatStartMuted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSVoiceChatUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatStartMuted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSVoiceChatUtility, nullptr, "GetVoiceChatStartMuted", nullptr, nullptr, sizeof(ELEOSVoiceChatUtility_eventGetVoiceChatStartMuted_Parms), Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatStartMuted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatStartMuted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatStartMuted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatStartMuted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatStartMuted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatStartMuted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatStatus_Statics
	{
		struct ELEOSVoiceChatUtility_eventGetVoiceChatStatus_Parms
		{
			const UObject* WorldContextObject;
			FString ProductUserID;
			EEOSLobbyUserAudioStatus ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProductUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProductUserID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatStatus_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatStatus_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSVoiceChatUtility_eventGetVoiceChatStatus_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatStatus_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatStatus_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatStatus_Statics::NewProp_ProductUserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatStatus_Statics::NewProp_ProductUserID = { "ProductUserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSVoiceChatUtility_eventGetVoiceChatStatus_Parms, ProductUserID), METADATA_PARAMS(Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatStatus_Statics::NewProp_ProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatStatus_Statics::NewProp_ProductUserID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSVoiceChatUtility_eventGetVoiceChatStatus_Parms, ReturnValue), Z_Construct_UEnum_yEOSSDK_EEOSLobbyUserAudioStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatStatus_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatStatus_Statics::NewProp_ProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatStatus_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSVoiceChatUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSVoiceChatUtility, nullptr, "GetVoiceChatStatus", nullptr, nullptr, sizeof(ELEOSVoiceChatUtility_eventGetVoiceChatStatus_Parms), Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSVoiceChatUtility_IsVoiceChatBlocked_Statics
	{
		struct ELEOSVoiceChatUtility_eventIsVoiceChatBlocked_Parms
		{
			const UObject* WorldContextObject;
			FString ProductUserID;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProductUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProductUserID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSVoiceChatUtility_IsVoiceChatBlocked_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSVoiceChatUtility_IsVoiceChatBlocked_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSVoiceChatUtility_eventIsVoiceChatBlocked_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSVoiceChatUtility_IsVoiceChatBlocked_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSVoiceChatUtility_IsVoiceChatBlocked_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSVoiceChatUtility_IsVoiceChatBlocked_Statics::NewProp_ProductUserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEOSVoiceChatUtility_IsVoiceChatBlocked_Statics::NewProp_ProductUserID = { "ProductUserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSVoiceChatUtility_eventIsVoiceChatBlocked_Parms, ProductUserID), METADATA_PARAMS(Z_Construct_UFunction_UELEOSVoiceChatUtility_IsVoiceChatBlocked_Statics::NewProp_ProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSVoiceChatUtility_IsVoiceChatBlocked_Statics::NewProp_ProductUserID_MetaData)) };
	void Z_Construct_UFunction_UELEOSVoiceChatUtility_IsVoiceChatBlocked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSVoiceChatUtility_eventIsVoiceChatBlocked_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSVoiceChatUtility_IsVoiceChatBlocked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSVoiceChatUtility_eventIsVoiceChatBlocked_Parms), &Z_Construct_UFunction_UELEOSVoiceChatUtility_IsVoiceChatBlocked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSVoiceChatUtility_IsVoiceChatBlocked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSVoiceChatUtility_IsVoiceChatBlocked_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSVoiceChatUtility_IsVoiceChatBlocked_Statics::NewProp_ProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSVoiceChatUtility_IsVoiceChatBlocked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSVoiceChatUtility_IsVoiceChatBlocked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSVoiceChatUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSVoiceChatUtility_IsVoiceChatBlocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSVoiceChatUtility, nullptr, "IsVoiceChatBlocked", nullptr, nullptr, sizeof(ELEOSVoiceChatUtility_eventIsVoiceChatBlocked_Parms), Z_Construct_UFunction_UELEOSVoiceChatUtility_IsVoiceChatBlocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSVoiceChatUtility_IsVoiceChatBlocked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSVoiceChatUtility_IsVoiceChatBlocked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSVoiceChatUtility_IsVoiceChatBlocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSVoiceChatUtility_IsVoiceChatBlocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSVoiceChatUtility_IsVoiceChatBlocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSVoiceChatUtility_IsVoiceChatMuted_Statics
	{
		struct ELEOSVoiceChatUtility_eventIsVoiceChatMuted_Parms
		{
			const UObject* WorldContextObject;
			FString ProductUserID;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProductUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProductUserID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSVoiceChatUtility_IsVoiceChatMuted_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSVoiceChatUtility_IsVoiceChatMuted_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSVoiceChatUtility_eventIsVoiceChatMuted_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSVoiceChatUtility_IsVoiceChatMuted_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSVoiceChatUtility_IsVoiceChatMuted_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSVoiceChatUtility_IsVoiceChatMuted_Statics::NewProp_ProductUserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEOSVoiceChatUtility_IsVoiceChatMuted_Statics::NewProp_ProductUserID = { "ProductUserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSVoiceChatUtility_eventIsVoiceChatMuted_Parms, ProductUserID), METADATA_PARAMS(Z_Construct_UFunction_UELEOSVoiceChatUtility_IsVoiceChatMuted_Statics::NewProp_ProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSVoiceChatUtility_IsVoiceChatMuted_Statics::NewProp_ProductUserID_MetaData)) };
	void Z_Construct_UFunction_UELEOSVoiceChatUtility_IsVoiceChatMuted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSVoiceChatUtility_eventIsVoiceChatMuted_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSVoiceChatUtility_IsVoiceChatMuted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSVoiceChatUtility_eventIsVoiceChatMuted_Parms), &Z_Construct_UFunction_UELEOSVoiceChatUtility_IsVoiceChatMuted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSVoiceChatUtility_IsVoiceChatMuted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSVoiceChatUtility_IsVoiceChatMuted_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSVoiceChatUtility_IsVoiceChatMuted_Statics::NewProp_ProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSVoiceChatUtility_IsVoiceChatMuted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSVoiceChatUtility_IsVoiceChatMuted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSVoiceChatUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSVoiceChatUtility_IsVoiceChatMuted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSVoiceChatUtility, nullptr, "IsVoiceChatMuted", nullptr, nullptr, sizeof(ELEOSVoiceChatUtility_eventIsVoiceChatMuted_Parms), Z_Construct_UFunction_UELEOSVoiceChatUtility_IsVoiceChatMuted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSVoiceChatUtility_IsVoiceChatMuted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSVoiceChatUtility_IsVoiceChatMuted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSVoiceChatUtility_IsVoiceChatMuted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSVoiceChatUtility_IsVoiceChatMuted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSVoiceChatUtility_IsVoiceChatMuted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSVoiceChatUtility_IsVoiceChatSpeaking_Statics
	{
		struct ELEOSVoiceChatUtility_eventIsVoiceChatSpeaking_Parms
		{
			const UObject* WorldContextObject;
			FString ProductUserID;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProductUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProductUserID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSVoiceChatUtility_IsVoiceChatSpeaking_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSVoiceChatUtility_IsVoiceChatSpeaking_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSVoiceChatUtility_eventIsVoiceChatSpeaking_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSVoiceChatUtility_IsVoiceChatSpeaking_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSVoiceChatUtility_IsVoiceChatSpeaking_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSVoiceChatUtility_IsVoiceChatSpeaking_Statics::NewProp_ProductUserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEOSVoiceChatUtility_IsVoiceChatSpeaking_Statics::NewProp_ProductUserID = { "ProductUserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSVoiceChatUtility_eventIsVoiceChatSpeaking_Parms, ProductUserID), METADATA_PARAMS(Z_Construct_UFunction_UELEOSVoiceChatUtility_IsVoiceChatSpeaking_Statics::NewProp_ProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSVoiceChatUtility_IsVoiceChatSpeaking_Statics::NewProp_ProductUserID_MetaData)) };
	void Z_Construct_UFunction_UELEOSVoiceChatUtility_IsVoiceChatSpeaking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSVoiceChatUtility_eventIsVoiceChatSpeaking_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSVoiceChatUtility_IsVoiceChatSpeaking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSVoiceChatUtility_eventIsVoiceChatSpeaking_Parms), &Z_Construct_UFunction_UELEOSVoiceChatUtility_IsVoiceChatSpeaking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSVoiceChatUtility_IsVoiceChatSpeaking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSVoiceChatUtility_IsVoiceChatSpeaking_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSVoiceChatUtility_IsVoiceChatSpeaking_Statics::NewProp_ProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSVoiceChatUtility_IsVoiceChatSpeaking_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSVoiceChatUtility_IsVoiceChatSpeaking_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSVoiceChatUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSVoiceChatUtility_IsVoiceChatSpeaking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSVoiceChatUtility, nullptr, "IsVoiceChatSpeaking", nullptr, nullptr, sizeof(ELEOSVoiceChatUtility_eventIsVoiceChatSpeaking_Parms), Z_Construct_UFunction_UELEOSVoiceChatUtility_IsVoiceChatSpeaking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSVoiceChatUtility_IsVoiceChatSpeaking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSVoiceChatUtility_IsVoiceChatSpeaking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSVoiceChatUtility_IsVoiceChatSpeaking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSVoiceChatUtility_IsVoiceChatSpeaking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSVoiceChatUtility_IsVoiceChatSpeaking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSVoiceChatUtility_MuteVoiceChat_Statics
	{
		struct ELEOSVoiceChatUtility_eventMuteVoiceChat_Parms
		{
			const UObject* WorldContextObject;
			FString ProductUserID;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProductUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProductUserID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSVoiceChatUtility_MuteVoiceChat_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSVoiceChatUtility_MuteVoiceChat_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSVoiceChatUtility_eventMuteVoiceChat_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSVoiceChatUtility_MuteVoiceChat_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSVoiceChatUtility_MuteVoiceChat_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSVoiceChatUtility_MuteVoiceChat_Statics::NewProp_ProductUserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEOSVoiceChatUtility_MuteVoiceChat_Statics::NewProp_ProductUserID = { "ProductUserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSVoiceChatUtility_eventMuteVoiceChat_Parms, ProductUserID), METADATA_PARAMS(Z_Construct_UFunction_UELEOSVoiceChatUtility_MuteVoiceChat_Statics::NewProp_ProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSVoiceChatUtility_MuteVoiceChat_Statics::NewProp_ProductUserID_MetaData)) };
	void Z_Construct_UFunction_UELEOSVoiceChatUtility_MuteVoiceChat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSVoiceChatUtility_eventMuteVoiceChat_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSVoiceChatUtility_MuteVoiceChat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSVoiceChatUtility_eventMuteVoiceChat_Parms), &Z_Construct_UFunction_UELEOSVoiceChatUtility_MuteVoiceChat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSVoiceChatUtility_MuteVoiceChat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSVoiceChatUtility_MuteVoiceChat_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSVoiceChatUtility_MuteVoiceChat_Statics::NewProp_ProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSVoiceChatUtility_MuteVoiceChat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSVoiceChatUtility_MuteVoiceChat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSVoiceChatUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSVoiceChatUtility_MuteVoiceChat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSVoiceChatUtility, nullptr, "MuteVoiceChat", nullptr, nullptr, sizeof(ELEOSVoiceChatUtility_eventMuteVoiceChat_Parms), Z_Construct_UFunction_UELEOSVoiceChatUtility_MuteVoiceChat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSVoiceChatUtility_MuteVoiceChat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSVoiceChatUtility_MuteVoiceChat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSVoiceChatUtility_MuteVoiceChat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSVoiceChatUtility_MuteVoiceChat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSVoiceChatUtility_MuteVoiceChat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatEnabled_Statics
	{
		struct ELEOSVoiceChatUtility_eventSetVoiceChatEnabled_Parms
		{
			const UObject* WorldContextObject;
			bool _bEnabled;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp__bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bEnabled;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatEnabled_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatEnabled_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSVoiceChatUtility_eventSetVoiceChatEnabled_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatEnabled_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatEnabled_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatEnabled_Statics::NewProp__bEnabled_SetBit(void* Obj)
	{
		((ELEOSVoiceChatUtility_eventSetVoiceChatEnabled_Parms*)Obj)->_bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatEnabled_Statics::NewProp__bEnabled = { "_bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSVoiceChatUtility_eventSetVoiceChatEnabled_Parms), &Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatEnabled_Statics::NewProp__bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSVoiceChatUtility_eventSetVoiceChatEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSVoiceChatUtility_eventSetVoiceChatEnabled_Parms), &Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatEnabled_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatEnabled_Statics::NewProp__bEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSVoiceChatUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSVoiceChatUtility, nullptr, "SetVoiceChatEnabled", nullptr, nullptr, sizeof(ELEOSVoiceChatUtility_eventSetVoiceChatEnabled_Parms), Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatMuteAll_Statics
	{
		struct ELEOSVoiceChatUtility_eventSetVoiceChatMuteAll_Parms
		{
			const UObject* WorldContextObject;
			EEOSLobbyUserMuteFlag Flag;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Flag_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Flag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatMuteAll_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatMuteAll_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSVoiceChatUtility_eventSetVoiceChatMuteAll_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatMuteAll_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatMuteAll_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatMuteAll_Statics::NewProp_Flag_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatMuteAll_Statics::NewProp_Flag = { "Flag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSVoiceChatUtility_eventSetVoiceChatMuteAll_Parms, Flag), Z_Construct_UEnum_yEOSSDK_EEOSLobbyUserMuteFlag, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatMuteAll_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSVoiceChatUtility_eventSetVoiceChatMuteAll_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatMuteAll_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSVoiceChatUtility_eventSetVoiceChatMuteAll_Parms), &Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatMuteAll_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatMuteAll_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatMuteAll_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatMuteAll_Statics::NewProp_Flag_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatMuteAll_Statics::NewProp_Flag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatMuteAll_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatMuteAll_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSVoiceChatUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatMuteAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSVoiceChatUtility, nullptr, "SetVoiceChatMuteAll", nullptr, nullptr, sizeof(ELEOSVoiceChatUtility_eventSetVoiceChatMuteAll_Parms), Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatMuteAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatMuteAll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatMuteAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatMuteAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatMuteAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatMuteAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatMuteFlag_Statics
	{
		struct ELEOSVoiceChatUtility_eventSetVoiceChatMuteFlag_Parms
		{
			const UObject* WorldContextObject;
			FString ProductUserID;
			EEOSLobbyUserMuteFlag Flag;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProductUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProductUserID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Flag_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Flag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatMuteFlag_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatMuteFlag_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSVoiceChatUtility_eventSetVoiceChatMuteFlag_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatMuteFlag_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatMuteFlag_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatMuteFlag_Statics::NewProp_ProductUserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatMuteFlag_Statics::NewProp_ProductUserID = { "ProductUserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSVoiceChatUtility_eventSetVoiceChatMuteFlag_Parms, ProductUserID), METADATA_PARAMS(Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatMuteFlag_Statics::NewProp_ProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatMuteFlag_Statics::NewProp_ProductUserID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatMuteFlag_Statics::NewProp_Flag_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatMuteFlag_Statics::NewProp_Flag = { "Flag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSVoiceChatUtility_eventSetVoiceChatMuteFlag_Parms, Flag), Z_Construct_UEnum_yEOSSDK_EEOSLobbyUserMuteFlag, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatMuteFlag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSVoiceChatUtility_eventSetVoiceChatMuteFlag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatMuteFlag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSVoiceChatUtility_eventSetVoiceChatMuteFlag_Parms), &Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatMuteFlag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatMuteFlag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatMuteFlag_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatMuteFlag_Statics::NewProp_ProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatMuteFlag_Statics::NewProp_Flag_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatMuteFlag_Statics::NewProp_Flag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatMuteFlag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatMuteFlag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSVoiceChatUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatMuteFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSVoiceChatUtility, nullptr, "SetVoiceChatMuteFlag", nullptr, nullptr, sizeof(ELEOSVoiceChatUtility_eventSetVoiceChatMuteFlag_Parms), Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatMuteFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatMuteFlag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatMuteFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatMuteFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatMuteFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatMuteFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatStartMuted_Statics
	{
		struct ELEOSVoiceChatUtility_eventSetVoiceChatStartMuted_Parms
		{
			const UObject* WorldContextObject;
			bool _bMuted;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp__bMuted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bMuted;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatStartMuted_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatStartMuted_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSVoiceChatUtility_eventSetVoiceChatStartMuted_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatStartMuted_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatStartMuted_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatStartMuted_Statics::NewProp__bMuted_SetBit(void* Obj)
	{
		((ELEOSVoiceChatUtility_eventSetVoiceChatStartMuted_Parms*)Obj)->_bMuted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatStartMuted_Statics::NewProp__bMuted = { "_bMuted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSVoiceChatUtility_eventSetVoiceChatStartMuted_Parms), &Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatStartMuted_Statics::NewProp__bMuted_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatStartMuted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSVoiceChatUtility_eventSetVoiceChatStartMuted_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatStartMuted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSVoiceChatUtility_eventSetVoiceChatStartMuted_Parms), &Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatStartMuted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatStartMuted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatStartMuted_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatStartMuted_Statics::NewProp__bMuted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatStartMuted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatStartMuted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSVoiceChatUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatStartMuted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSVoiceChatUtility, nullptr, "SetVoiceChatStartMuted", nullptr, nullptr, sizeof(ELEOSVoiceChatUtility_eventSetVoiceChatStartMuted_Parms), Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatStartMuted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatStartMuted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatStartMuted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatStartMuted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatStartMuted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatStartMuted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSVoiceChatUtility_UnblockVoiceChat_Statics
	{
		struct ELEOSVoiceChatUtility_eventUnblockVoiceChat_Parms
		{
			const UObject* WorldContextObject;
			FString ProductUserID;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProductUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProductUserID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSVoiceChatUtility_UnblockVoiceChat_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSVoiceChatUtility_UnblockVoiceChat_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSVoiceChatUtility_eventUnblockVoiceChat_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSVoiceChatUtility_UnblockVoiceChat_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSVoiceChatUtility_UnblockVoiceChat_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSVoiceChatUtility_UnblockVoiceChat_Statics::NewProp_ProductUserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEOSVoiceChatUtility_UnblockVoiceChat_Statics::NewProp_ProductUserID = { "ProductUserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSVoiceChatUtility_eventUnblockVoiceChat_Parms, ProductUserID), METADATA_PARAMS(Z_Construct_UFunction_UELEOSVoiceChatUtility_UnblockVoiceChat_Statics::NewProp_ProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSVoiceChatUtility_UnblockVoiceChat_Statics::NewProp_ProductUserID_MetaData)) };
	void Z_Construct_UFunction_UELEOSVoiceChatUtility_UnblockVoiceChat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSVoiceChatUtility_eventUnblockVoiceChat_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSVoiceChatUtility_UnblockVoiceChat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSVoiceChatUtility_eventUnblockVoiceChat_Parms), &Z_Construct_UFunction_UELEOSVoiceChatUtility_UnblockVoiceChat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSVoiceChatUtility_UnblockVoiceChat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSVoiceChatUtility_UnblockVoiceChat_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSVoiceChatUtility_UnblockVoiceChat_Statics::NewProp_ProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSVoiceChatUtility_UnblockVoiceChat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSVoiceChatUtility_UnblockVoiceChat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSVoiceChatUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSVoiceChatUtility_UnblockVoiceChat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSVoiceChatUtility, nullptr, "UnblockVoiceChat", nullptr, nullptr, sizeof(ELEOSVoiceChatUtility_eventUnblockVoiceChat_Parms), Z_Construct_UFunction_UELEOSVoiceChatUtility_UnblockVoiceChat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSVoiceChatUtility_UnblockVoiceChat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSVoiceChatUtility_UnblockVoiceChat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSVoiceChatUtility_UnblockVoiceChat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSVoiceChatUtility_UnblockVoiceChat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSVoiceChatUtility_UnblockVoiceChat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSVoiceChatUtility_UnmuteVoiceChat_Statics
	{
		struct ELEOSVoiceChatUtility_eventUnmuteVoiceChat_Parms
		{
			const UObject* WorldContextObject;
			FString ProductUserID;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProductUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProductUserID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSVoiceChatUtility_UnmuteVoiceChat_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSVoiceChatUtility_UnmuteVoiceChat_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSVoiceChatUtility_eventUnmuteVoiceChat_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSVoiceChatUtility_UnmuteVoiceChat_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSVoiceChatUtility_UnmuteVoiceChat_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSVoiceChatUtility_UnmuteVoiceChat_Statics::NewProp_ProductUserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEOSVoiceChatUtility_UnmuteVoiceChat_Statics::NewProp_ProductUserID = { "ProductUserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSVoiceChatUtility_eventUnmuteVoiceChat_Parms, ProductUserID), METADATA_PARAMS(Z_Construct_UFunction_UELEOSVoiceChatUtility_UnmuteVoiceChat_Statics::NewProp_ProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSVoiceChatUtility_UnmuteVoiceChat_Statics::NewProp_ProductUserID_MetaData)) };
	void Z_Construct_UFunction_UELEOSVoiceChatUtility_UnmuteVoiceChat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSVoiceChatUtility_eventUnmuteVoiceChat_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSVoiceChatUtility_UnmuteVoiceChat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSVoiceChatUtility_eventUnmuteVoiceChat_Parms), &Z_Construct_UFunction_UELEOSVoiceChatUtility_UnmuteVoiceChat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSVoiceChatUtility_UnmuteVoiceChat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSVoiceChatUtility_UnmuteVoiceChat_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSVoiceChatUtility_UnmuteVoiceChat_Statics::NewProp_ProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSVoiceChatUtility_UnmuteVoiceChat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSVoiceChatUtility_UnmuteVoiceChat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSVoiceChatUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSVoiceChatUtility_UnmuteVoiceChat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSVoiceChatUtility, nullptr, "UnmuteVoiceChat", nullptr, nullptr, sizeof(ELEOSVoiceChatUtility_eventUnmuteVoiceChat_Parms), Z_Construct_UFunction_UELEOSVoiceChatUtility_UnmuteVoiceChat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSVoiceChatUtility_UnmuteVoiceChat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSVoiceChatUtility_UnmuteVoiceChat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSVoiceChatUtility_UnmuteVoiceChat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSVoiceChatUtility_UnmuteVoiceChat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSVoiceChatUtility_UnmuteVoiceChat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSVoiceChatUtility_UpdateVoiceMutedAllMembers_Statics
	{
		struct ELEOSVoiceChatUtility_eventUpdateVoiceMutedAllMembers_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSVoiceChatUtility_UpdateVoiceMutedAllMembers_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSVoiceChatUtility_UpdateVoiceMutedAllMembers_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSVoiceChatUtility_eventUpdateVoiceMutedAllMembers_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSVoiceChatUtility_UpdateVoiceMutedAllMembers_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSVoiceChatUtility_UpdateVoiceMutedAllMembers_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UELEOSVoiceChatUtility_UpdateVoiceMutedAllMembers_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSVoiceChatUtility_eventUpdateVoiceMutedAllMembers_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSVoiceChatUtility_UpdateVoiceMutedAllMembers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSVoiceChatUtility_eventUpdateVoiceMutedAllMembers_Parms), &Z_Construct_UFunction_UELEOSVoiceChatUtility_UpdateVoiceMutedAllMembers_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSVoiceChatUtility_UpdateVoiceMutedAllMembers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSVoiceChatUtility_UpdateVoiceMutedAllMembers_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSVoiceChatUtility_UpdateVoiceMutedAllMembers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSVoiceChatUtility_UpdateVoiceMutedAllMembers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSVoiceChatUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSVoiceChatUtility_UpdateVoiceMutedAllMembers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSVoiceChatUtility, nullptr, "UpdateVoiceMutedAllMembers", nullptr, nullptr, sizeof(ELEOSVoiceChatUtility_eventUpdateVoiceMutedAllMembers_Parms), Z_Construct_UFunction_UELEOSVoiceChatUtility_UpdateVoiceMutedAllMembers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSVoiceChatUtility_UpdateVoiceMutedAllMembers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSVoiceChatUtility_UpdateVoiceMutedAllMembers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSVoiceChatUtility_UpdateVoiceMutedAllMembers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSVoiceChatUtility_UpdateVoiceMutedAllMembers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSVoiceChatUtility_UpdateVoiceMutedAllMembers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELEOSVoiceChatUtility_NoRegister()
	{
		return UELEOSVoiceChatUtility::StaticClass();
	}
	struct Z_Construct_UClass_UELEOSVoiceChatUtility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELEOSVoiceChatUtility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELEOSVoiceChatUtility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELEOSVoiceChatUtility_BlockVoiceChat, "BlockVoiceChat" }, // 3865502713
		{ &Z_Construct_UFunction_UELEOSVoiceChatUtility_ClearVoiceChatMuteAll, "ClearVoiceChatMuteAll" }, // 3317559600
		{ &Z_Construct_UFunction_UELEOSVoiceChatUtility_ClearVoiceChatMuteFlag, "ClearVoiceChatMuteFlag" }, // 870652313
		{ &Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatEnabled, "GetVoiceChatEnabled" }, // 1005814223
		{ &Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatMuteFlag, "GetVoiceChatMuteFlag" }, // 3822564189
		{ &Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatSpeakingUsers, "GetVoiceChatSpeakingUsers" }, // 729554909
		{ &Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatStartMuted, "GetVoiceChatStartMuted" }, // 1365174000
		{ &Z_Construct_UFunction_UELEOSVoiceChatUtility_GetVoiceChatStatus, "GetVoiceChatStatus" }, // 1403710581
		{ &Z_Construct_UFunction_UELEOSVoiceChatUtility_IsVoiceChatBlocked, "IsVoiceChatBlocked" }, // 4247996219
		{ &Z_Construct_UFunction_UELEOSVoiceChatUtility_IsVoiceChatMuted, "IsVoiceChatMuted" }, // 2150559313
		{ &Z_Construct_UFunction_UELEOSVoiceChatUtility_IsVoiceChatSpeaking, "IsVoiceChatSpeaking" }, // 1618369313
		{ &Z_Construct_UFunction_UELEOSVoiceChatUtility_MuteVoiceChat, "MuteVoiceChat" }, // 389956857
		{ &Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatEnabled, "SetVoiceChatEnabled" }, // 2204110465
		{ &Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatMuteAll, "SetVoiceChatMuteAll" }, // 4269622792
		{ &Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatMuteFlag, "SetVoiceChatMuteFlag" }, // 4068692635
		{ &Z_Construct_UFunction_UELEOSVoiceChatUtility_SetVoiceChatStartMuted, "SetVoiceChatStartMuted" }, // 2268480713
		{ &Z_Construct_UFunction_UELEOSVoiceChatUtility_UnblockVoiceChat, "UnblockVoiceChat" }, // 81888621
		{ &Z_Construct_UFunction_UELEOSVoiceChatUtility_UnmuteVoiceChat, "UnmuteVoiceChat" }, // 3654719954
		{ &Z_Construct_UFunction_UELEOSVoiceChatUtility_UpdateVoiceMutedAllMembers, "UpdateVoiceMutedAllMembers" }, // 3610008503
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELEOSVoiceChatUtility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELEOSVoiceChatUtility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELEOSVoiceChatUtility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELEOSVoiceChatUtility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELEOSVoiceChatUtility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELEOSVoiceChatUtility_Statics::ClassParams = {
		&UELEOSVoiceChatUtility::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELEOSVoiceChatUtility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSVoiceChatUtility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELEOSVoiceChatUtility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELEOSVoiceChatUtility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELEOSVoiceChatUtility, 860824891);
	template<> ABP_200508_API UClass* StaticClass<UELEOSVoiceChatUtility>()
	{
		return UELEOSVoiceChatUtility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELEOSVoiceChatUtility(Z_Construct_UClass_UELEOSVoiceChatUtility, &UELEOSVoiceChatUtility::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELEOSVoiceChatUtility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELEOSVoiceChatUtility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
