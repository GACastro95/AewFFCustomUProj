// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSLobbyUser.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSLobbyUser() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSLobbyUser_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSLobbyUser();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSCommunityUserBase();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSLobbyUserAudioStatus();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSLobbyUserMuteFlag();
// End Cross Module References
	DEFINE_FUNCTION(UEOSLobbyUser::execGetAudioStatus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EEOSLobbyUserAudioStatus*)Z_Param__Result=P_THIS->GetAudioStatus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSLobbyUser::execGetBlockFlag)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EEOSLobbyUserMuteFlag*)Z_Param__Result=P_THIS->GetBlockFlag();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSLobbyUser::execGetMuteFlag)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EEOSLobbyUserMuteFlag*)Z_Param__Result=P_THIS->GetMuteFlag();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSLobbyUser::execGetTextBlockFlag)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EEOSLobbyUserMuteFlag*)Z_Param__Result=P_THIS->GetTextBlockFlag();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSLobbyUser::execIsBlocked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsBlocked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSLobbyUser::execIsMuted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsMuted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSLobbyUser::execIsSpeaking)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSpeaking();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSLobbyUser::execIsTextBlocked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsTextBlocked();
		P_NATIVE_END;
	}
	void UEOSLobbyUser::StaticRegisterNativesUEOSLobbyUser()
	{
		UClass* Class = UEOSLobbyUser::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAudioStatus", &UEOSLobbyUser::execGetAudioStatus },
			{ "GetBlockFlag", &UEOSLobbyUser::execGetBlockFlag },
			{ "GetMuteFlag", &UEOSLobbyUser::execGetMuteFlag },
			{ "GetTextBlockFlag", &UEOSLobbyUser::execGetTextBlockFlag },
			{ "IsBlocked", &UEOSLobbyUser::execIsBlocked },
			{ "IsMuted", &UEOSLobbyUser::execIsMuted },
			{ "IsSpeaking", &UEOSLobbyUser::execIsSpeaking },
			{ "IsTextBlocked", &UEOSLobbyUser::execIsTextBlocked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSLobbyUser_GetAudioStatus_Statics
	{
		struct EOSLobbyUser_eventGetAudioStatus_Parms
		{
			EEOSLobbyUserAudioStatus ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSLobbyUser_GetAudioStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSLobbyUser_GetAudioStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSLobbyUser_eventGetAudioStatus_Parms, ReturnValue), Z_Construct_UEnum_yEOSSDK_EEOSLobbyUserAudioStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSLobbyUser_GetAudioStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobbyUser_GetAudioStatus_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobbyUser_GetAudioStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSLobbyUser_GetAudioStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSLobbyUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSLobbyUser_GetAudioStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSLobbyUser, nullptr, "GetAudioStatus", nullptr, nullptr, sizeof(EOSLobbyUser_eventGetAudioStatus_Parms), Z_Construct_UFunction_UEOSLobbyUser_GetAudioStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobbyUser_GetAudioStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSLobbyUser_GetAudioStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobbyUser_GetAudioStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSLobbyUser_GetAudioStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSLobbyUser_GetAudioStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSLobbyUser_GetBlockFlag_Statics
	{
		struct EOSLobbyUser_eventGetBlockFlag_Parms
		{
			EEOSLobbyUserMuteFlag ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSLobbyUser_GetBlockFlag_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSLobbyUser_GetBlockFlag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSLobbyUser_eventGetBlockFlag_Parms, ReturnValue), Z_Construct_UEnum_yEOSSDK_EEOSLobbyUserMuteFlag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSLobbyUser_GetBlockFlag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobbyUser_GetBlockFlag_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobbyUser_GetBlockFlag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSLobbyUser_GetBlockFlag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSLobbyUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSLobbyUser_GetBlockFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSLobbyUser, nullptr, "GetBlockFlag", nullptr, nullptr, sizeof(EOSLobbyUser_eventGetBlockFlag_Parms), Z_Construct_UFunction_UEOSLobbyUser_GetBlockFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobbyUser_GetBlockFlag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSLobbyUser_GetBlockFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobbyUser_GetBlockFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSLobbyUser_GetBlockFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSLobbyUser_GetBlockFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSLobbyUser_GetMuteFlag_Statics
	{
		struct EOSLobbyUser_eventGetMuteFlag_Parms
		{
			EEOSLobbyUserMuteFlag ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSLobbyUser_GetMuteFlag_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSLobbyUser_GetMuteFlag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSLobbyUser_eventGetMuteFlag_Parms, ReturnValue), Z_Construct_UEnum_yEOSSDK_EEOSLobbyUserMuteFlag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSLobbyUser_GetMuteFlag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobbyUser_GetMuteFlag_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobbyUser_GetMuteFlag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSLobbyUser_GetMuteFlag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSLobbyUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSLobbyUser_GetMuteFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSLobbyUser, nullptr, "GetMuteFlag", nullptr, nullptr, sizeof(EOSLobbyUser_eventGetMuteFlag_Parms), Z_Construct_UFunction_UEOSLobbyUser_GetMuteFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobbyUser_GetMuteFlag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSLobbyUser_GetMuteFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobbyUser_GetMuteFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSLobbyUser_GetMuteFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSLobbyUser_GetMuteFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSLobbyUser_GetTextBlockFlag_Statics
	{
		struct EOSLobbyUser_eventGetTextBlockFlag_Parms
		{
			EEOSLobbyUserMuteFlag ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSLobbyUser_GetTextBlockFlag_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSLobbyUser_GetTextBlockFlag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSLobbyUser_eventGetTextBlockFlag_Parms, ReturnValue), Z_Construct_UEnum_yEOSSDK_EEOSLobbyUserMuteFlag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSLobbyUser_GetTextBlockFlag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobbyUser_GetTextBlockFlag_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobbyUser_GetTextBlockFlag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSLobbyUser_GetTextBlockFlag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSLobbyUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSLobbyUser_GetTextBlockFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSLobbyUser, nullptr, "GetTextBlockFlag", nullptr, nullptr, sizeof(EOSLobbyUser_eventGetTextBlockFlag_Parms), Z_Construct_UFunction_UEOSLobbyUser_GetTextBlockFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobbyUser_GetTextBlockFlag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSLobbyUser_GetTextBlockFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobbyUser_GetTextBlockFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSLobbyUser_GetTextBlockFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSLobbyUser_GetTextBlockFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSLobbyUser_IsBlocked_Statics
	{
		struct EOSLobbyUser_eventIsBlocked_Parms
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
	void Z_Construct_UFunction_UEOSLobbyUser_IsBlocked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSLobbyUser_eventIsBlocked_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSLobbyUser_IsBlocked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSLobbyUser_eventIsBlocked_Parms), &Z_Construct_UFunction_UEOSLobbyUser_IsBlocked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSLobbyUser_IsBlocked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobbyUser_IsBlocked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSLobbyUser_IsBlocked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSLobbyUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSLobbyUser_IsBlocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSLobbyUser, nullptr, "IsBlocked", nullptr, nullptr, sizeof(EOSLobbyUser_eventIsBlocked_Parms), Z_Construct_UFunction_UEOSLobbyUser_IsBlocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobbyUser_IsBlocked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSLobbyUser_IsBlocked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobbyUser_IsBlocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSLobbyUser_IsBlocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSLobbyUser_IsBlocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSLobbyUser_IsMuted_Statics
	{
		struct EOSLobbyUser_eventIsMuted_Parms
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
	void Z_Construct_UFunction_UEOSLobbyUser_IsMuted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSLobbyUser_eventIsMuted_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSLobbyUser_IsMuted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSLobbyUser_eventIsMuted_Parms), &Z_Construct_UFunction_UEOSLobbyUser_IsMuted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSLobbyUser_IsMuted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobbyUser_IsMuted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSLobbyUser_IsMuted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSLobbyUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSLobbyUser_IsMuted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSLobbyUser, nullptr, "IsMuted", nullptr, nullptr, sizeof(EOSLobbyUser_eventIsMuted_Parms), Z_Construct_UFunction_UEOSLobbyUser_IsMuted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobbyUser_IsMuted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSLobbyUser_IsMuted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobbyUser_IsMuted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSLobbyUser_IsMuted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSLobbyUser_IsMuted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSLobbyUser_IsSpeaking_Statics
	{
		struct EOSLobbyUser_eventIsSpeaking_Parms
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
	void Z_Construct_UFunction_UEOSLobbyUser_IsSpeaking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSLobbyUser_eventIsSpeaking_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSLobbyUser_IsSpeaking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSLobbyUser_eventIsSpeaking_Parms), &Z_Construct_UFunction_UEOSLobbyUser_IsSpeaking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSLobbyUser_IsSpeaking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobbyUser_IsSpeaking_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSLobbyUser_IsSpeaking_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSLobbyUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSLobbyUser_IsSpeaking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSLobbyUser, nullptr, "IsSpeaking", nullptr, nullptr, sizeof(EOSLobbyUser_eventIsSpeaking_Parms), Z_Construct_UFunction_UEOSLobbyUser_IsSpeaking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobbyUser_IsSpeaking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSLobbyUser_IsSpeaking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobbyUser_IsSpeaking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSLobbyUser_IsSpeaking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSLobbyUser_IsSpeaking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSLobbyUser_IsTextBlocked_Statics
	{
		struct EOSLobbyUser_eventIsTextBlocked_Parms
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
	void Z_Construct_UFunction_UEOSLobbyUser_IsTextBlocked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSLobbyUser_eventIsTextBlocked_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSLobbyUser_IsTextBlocked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSLobbyUser_eventIsTextBlocked_Parms), &Z_Construct_UFunction_UEOSLobbyUser_IsTextBlocked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSLobbyUser_IsTextBlocked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobbyUser_IsTextBlocked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSLobbyUser_IsTextBlocked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSLobbyUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSLobbyUser_IsTextBlocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSLobbyUser, nullptr, "IsTextBlocked", nullptr, nullptr, sizeof(EOSLobbyUser_eventIsTextBlocked_Parms), Z_Construct_UFunction_UEOSLobbyUser_IsTextBlocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobbyUser_IsTextBlocked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSLobbyUser_IsTextBlocked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobbyUser_IsTextBlocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSLobbyUser_IsTextBlocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSLobbyUser_IsTextBlocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSLobbyUser_NoRegister()
	{
		return UEOSLobbyUser::StaticClass();
	}
	struct Z_Construct_UClass_UEOSLobbyUser_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSLobbyUser_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCommunityUserBase,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSLobbyUser_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSLobbyUser_GetAudioStatus, "GetAudioStatus" }, // 932916368
		{ &Z_Construct_UFunction_UEOSLobbyUser_GetBlockFlag, "GetBlockFlag" }, // 2997764087
		{ &Z_Construct_UFunction_UEOSLobbyUser_GetMuteFlag, "GetMuteFlag" }, // 603744986
		{ &Z_Construct_UFunction_UEOSLobbyUser_GetTextBlockFlag, "GetTextBlockFlag" }, // 1269419644
		{ &Z_Construct_UFunction_UEOSLobbyUser_IsBlocked, "IsBlocked" }, // 482226507
		{ &Z_Construct_UFunction_UEOSLobbyUser_IsMuted, "IsMuted" }, // 4026314058
		{ &Z_Construct_UFunction_UEOSLobbyUser_IsSpeaking, "IsSpeaking" }, // 3449060716
		{ &Z_Construct_UFunction_UEOSLobbyUser_IsTextBlocked, "IsTextBlocked" }, // 2826034931
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSLobbyUser_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSLobbyUser.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSLobbyUser.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSLobbyUser_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSLobbyUser>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSLobbyUser_Statics::ClassParams = {
		&UEOSLobbyUser::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSLobbyUser_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSLobbyUser_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSLobbyUser()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSLobbyUser_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSLobbyUser, 2188481259);
	template<> YEOSSDK_API UClass* StaticClass<UEOSLobbyUser>()
	{
		return UEOSLobbyUser::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSLobbyUser(Z_Construct_UClass_UEOSLobbyUser, &UEOSLobbyUser::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSLobbyUser"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSLobbyUser);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
