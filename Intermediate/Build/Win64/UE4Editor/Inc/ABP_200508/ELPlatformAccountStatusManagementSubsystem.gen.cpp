// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELPlatformAccountStatusManagementSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELPlatformAccountStatusManagementSubsystem() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELPlatformAccountStatusManagementSubsystem_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELPlatformAccountStatusManagementSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_CloseLoginUIEventHandler__DelegateSignature();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_LoginCancelEventHandler__DelegateSignature();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_LogoutEventHandler__DelegateSignature();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_SwapLoginEventHandler__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UELPlatformAccountStatusManagementSubsystem::execClosedDialog)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClosedDialog();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPlatformAccountStatusManagementSubsystem::execFinishedSwitchProfile)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishedSwitchProfile();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPlatformAccountStatusManagementSubsystem::execFirstLogin)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__controllerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FirstLogin(Z_Param__controllerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPlatformAccountStatusManagementSubsystem::execGetHostControllerIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetHostControllerIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPlatformAccountStatusManagementSubsystem::execIsExecuteSwitchProfile)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsExecuteSwitchProfile();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPlatformAccountStatusManagementSubsystem::execIsNetworkConnection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsNetworkConnection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPlatformAccountStatusManagementSubsystem::execIsOSSLoggedIn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsOSSLoggedIn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPlatformAccountStatusManagementSubsystem::execIsRequestDialog)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRequestDialog();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPlatformAccountStatusManagementSubsystem::execOpenPickerforReConnectPad)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__controllerIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param__checkingController);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OpenPickerforReConnectPad(Z_Param__controllerIndex,Z_Param__checkingController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPlatformAccountStatusManagementSubsystem::execSwitchProfile)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchProfile();
		P_NATIVE_END;
	}
	void UELPlatformAccountStatusManagementSubsystem::StaticRegisterNativesUELPlatformAccountStatusManagementSubsystem()
	{
		UClass* Class = UELPlatformAccountStatusManagementSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClosedDialog", &UELPlatformAccountStatusManagementSubsystem::execClosedDialog },
			{ "FinishedSwitchProfile", &UELPlatformAccountStatusManagementSubsystem::execFinishedSwitchProfile },
			{ "FirstLogin", &UELPlatformAccountStatusManagementSubsystem::execFirstLogin },
			{ "GetHostControllerIndex", &UELPlatformAccountStatusManagementSubsystem::execGetHostControllerIndex },
			{ "IsExecuteSwitchProfile", &UELPlatformAccountStatusManagementSubsystem::execIsExecuteSwitchProfile },
			{ "IsNetworkConnection", &UELPlatformAccountStatusManagementSubsystem::execIsNetworkConnection },
			{ "IsOSSLoggedIn", &UELPlatformAccountStatusManagementSubsystem::execIsOSSLoggedIn },
			{ "IsRequestDialog", &UELPlatformAccountStatusManagementSubsystem::execIsRequestDialog },
			{ "OpenPickerforReConnectPad", &UELPlatformAccountStatusManagementSubsystem::execOpenPickerforReConnectPad },
			{ "SwitchProfile", &UELPlatformAccountStatusManagementSubsystem::execSwitchProfile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_ClosedDialog_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_ClosedDialog_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPlatformAccountStatusManagementSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_ClosedDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPlatformAccountStatusManagementSubsystem, nullptr, "ClosedDialog", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_ClosedDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_ClosedDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_ClosedDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_ClosedDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_FinishedSwitchProfile_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_FinishedSwitchProfile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPlatformAccountStatusManagementSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_FinishedSwitchProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPlatformAccountStatusManagementSubsystem, nullptr, "FinishedSwitchProfile", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_FinishedSwitchProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_FinishedSwitchProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_FinishedSwitchProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_FinishedSwitchProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_FirstLogin_Statics
	{
		struct ELPlatformAccountStatusManagementSubsystem_eventFirstLogin_Parms
		{
			int32 _controllerIndex;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__controllerIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__controllerIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_FirstLogin_Statics::NewProp__controllerIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_FirstLogin_Statics::NewProp__controllerIndex = { "_controllerIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlatformAccountStatusManagementSubsystem_eventFirstLogin_Parms, _controllerIndex), METADATA_PARAMS(Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_FirstLogin_Statics::NewProp__controllerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_FirstLogin_Statics::NewProp__controllerIndex_MetaData)) };
	void Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_FirstLogin_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELPlatformAccountStatusManagementSubsystem_eventFirstLogin_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_FirstLogin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELPlatformAccountStatusManagementSubsystem_eventFirstLogin_Parms), &Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_FirstLogin_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_FirstLogin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_FirstLogin_Statics::NewProp__controllerIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_FirstLogin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_FirstLogin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPlatformAccountStatusManagementSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_FirstLogin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPlatformAccountStatusManagementSubsystem, nullptr, "FirstLogin", nullptr, nullptr, sizeof(ELPlatformAccountStatusManagementSubsystem_eventFirstLogin_Parms), Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_FirstLogin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_FirstLogin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_FirstLogin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_FirstLogin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_FirstLogin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_FirstLogin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_GetHostControllerIndex_Statics
	{
		struct ELPlatformAccountStatusManagementSubsystem_eventGetHostControllerIndex_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_GetHostControllerIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlatformAccountStatusManagementSubsystem_eventGetHostControllerIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_GetHostControllerIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_GetHostControllerIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_GetHostControllerIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPlatformAccountStatusManagementSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_GetHostControllerIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPlatformAccountStatusManagementSubsystem, nullptr, "GetHostControllerIndex", nullptr, nullptr, sizeof(ELPlatformAccountStatusManagementSubsystem_eventGetHostControllerIndex_Parms), Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_GetHostControllerIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_GetHostControllerIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_GetHostControllerIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_GetHostControllerIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_GetHostControllerIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_GetHostControllerIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_IsExecuteSwitchProfile_Statics
	{
		struct ELPlatformAccountStatusManagementSubsystem_eventIsExecuteSwitchProfile_Parms
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
	void Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_IsExecuteSwitchProfile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELPlatformAccountStatusManagementSubsystem_eventIsExecuteSwitchProfile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_IsExecuteSwitchProfile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELPlatformAccountStatusManagementSubsystem_eventIsExecuteSwitchProfile_Parms), &Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_IsExecuteSwitchProfile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_IsExecuteSwitchProfile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_IsExecuteSwitchProfile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_IsExecuteSwitchProfile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPlatformAccountStatusManagementSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_IsExecuteSwitchProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPlatformAccountStatusManagementSubsystem, nullptr, "IsExecuteSwitchProfile", nullptr, nullptr, sizeof(ELPlatformAccountStatusManagementSubsystem_eventIsExecuteSwitchProfile_Parms), Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_IsExecuteSwitchProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_IsExecuteSwitchProfile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_IsExecuteSwitchProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_IsExecuteSwitchProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_IsExecuteSwitchProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_IsExecuteSwitchProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_IsNetworkConnection_Statics
	{
		struct ELPlatformAccountStatusManagementSubsystem_eventIsNetworkConnection_Parms
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
	void Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_IsNetworkConnection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELPlatformAccountStatusManagementSubsystem_eventIsNetworkConnection_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_IsNetworkConnection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELPlatformAccountStatusManagementSubsystem_eventIsNetworkConnection_Parms), &Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_IsNetworkConnection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_IsNetworkConnection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_IsNetworkConnection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_IsNetworkConnection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPlatformAccountStatusManagementSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_IsNetworkConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPlatformAccountStatusManagementSubsystem, nullptr, "IsNetworkConnection", nullptr, nullptr, sizeof(ELPlatformAccountStatusManagementSubsystem_eventIsNetworkConnection_Parms), Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_IsNetworkConnection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_IsNetworkConnection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_IsNetworkConnection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_IsNetworkConnection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_IsNetworkConnection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_IsNetworkConnection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_IsOSSLoggedIn_Statics
	{
		struct ELPlatformAccountStatusManagementSubsystem_eventIsOSSLoggedIn_Parms
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
	void Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_IsOSSLoggedIn_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELPlatformAccountStatusManagementSubsystem_eventIsOSSLoggedIn_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_IsOSSLoggedIn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELPlatformAccountStatusManagementSubsystem_eventIsOSSLoggedIn_Parms), &Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_IsOSSLoggedIn_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_IsOSSLoggedIn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_IsOSSLoggedIn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_IsOSSLoggedIn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPlatformAccountStatusManagementSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_IsOSSLoggedIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPlatformAccountStatusManagementSubsystem, nullptr, "IsOSSLoggedIn", nullptr, nullptr, sizeof(ELPlatformAccountStatusManagementSubsystem_eventIsOSSLoggedIn_Parms), Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_IsOSSLoggedIn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_IsOSSLoggedIn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_IsOSSLoggedIn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_IsOSSLoggedIn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_IsOSSLoggedIn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_IsOSSLoggedIn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_IsRequestDialog_Statics
	{
		struct ELPlatformAccountStatusManagementSubsystem_eventIsRequestDialog_Parms
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
	void Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_IsRequestDialog_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELPlatformAccountStatusManagementSubsystem_eventIsRequestDialog_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_IsRequestDialog_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELPlatformAccountStatusManagementSubsystem_eventIsRequestDialog_Parms), &Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_IsRequestDialog_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_IsRequestDialog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_IsRequestDialog_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_IsRequestDialog_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPlatformAccountStatusManagementSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_IsRequestDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPlatformAccountStatusManagementSubsystem, nullptr, "IsRequestDialog", nullptr, nullptr, sizeof(ELPlatformAccountStatusManagementSubsystem_eventIsRequestDialog_Parms), Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_IsRequestDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_IsRequestDialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_IsRequestDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_IsRequestDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_IsRequestDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_IsRequestDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_OpenPickerforReConnectPad_Statics
	{
		struct ELPlatformAccountStatusManagementSubsystem_eventOpenPickerforReConnectPad_Parms
		{
			int32 _controllerIndex;
			int32 _checkingController;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__controllerIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__controllerIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__checkingController_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__checkingController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_OpenPickerforReConnectPad_Statics::NewProp__controllerIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_OpenPickerforReConnectPad_Statics::NewProp__controllerIndex = { "_controllerIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlatformAccountStatusManagementSubsystem_eventOpenPickerforReConnectPad_Parms, _controllerIndex), METADATA_PARAMS(Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_OpenPickerforReConnectPad_Statics::NewProp__controllerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_OpenPickerforReConnectPad_Statics::NewProp__controllerIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_OpenPickerforReConnectPad_Statics::NewProp__checkingController_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_OpenPickerforReConnectPad_Statics::NewProp__checkingController = { "_checkingController", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlatformAccountStatusManagementSubsystem_eventOpenPickerforReConnectPad_Parms, _checkingController), METADATA_PARAMS(Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_OpenPickerforReConnectPad_Statics::NewProp__checkingController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_OpenPickerforReConnectPad_Statics::NewProp__checkingController_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_OpenPickerforReConnectPad_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_OpenPickerforReConnectPad_Statics::NewProp__controllerIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_OpenPickerforReConnectPad_Statics::NewProp__checkingController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_OpenPickerforReConnectPad_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPlatformAccountStatusManagementSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_OpenPickerforReConnectPad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPlatformAccountStatusManagementSubsystem, nullptr, "OpenPickerforReConnectPad", nullptr, nullptr, sizeof(ELPlatformAccountStatusManagementSubsystem_eventOpenPickerforReConnectPad_Parms), Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_OpenPickerforReConnectPad_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_OpenPickerforReConnectPad_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_OpenPickerforReConnectPad_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_OpenPickerforReConnectPad_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_OpenPickerforReConnectPad()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_OpenPickerforReConnectPad_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_SwitchProfile_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_SwitchProfile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPlatformAccountStatusManagementSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_SwitchProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPlatformAccountStatusManagementSubsystem, nullptr, "SwitchProfile", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_SwitchProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_SwitchProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_SwitchProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_SwitchProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELPlatformAccountStatusManagementSubsystem_NoRegister()
	{
		return UELPlatformAccountStatusManagementSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UELPlatformAccountStatusManagementSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCloseLoginUIEventHandler_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCloseLoginUIEventHandler;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnLoginCancelEventHandler_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLoginCancelEventHandler;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnLogoutEventHandler_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLogoutEventHandler;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSwapLoginEventHandler_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSwapLoginEventHandler;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELPlatformAccountStatusManagementSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELPlatformAccountStatusManagementSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_ClosedDialog, "ClosedDialog" }, // 2558687
		{ &Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_FinishedSwitchProfile, "FinishedSwitchProfile" }, // 2127503825
		{ &Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_FirstLogin, "FirstLogin" }, // 3132078171
		{ &Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_GetHostControllerIndex, "GetHostControllerIndex" }, // 1923678383
		{ &Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_IsExecuteSwitchProfile, "IsExecuteSwitchProfile" }, // 462084743
		{ &Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_IsNetworkConnection, "IsNetworkConnection" }, // 1392019757
		{ &Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_IsOSSLoggedIn, "IsOSSLoggedIn" }, // 1858649943
		{ &Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_IsRequestDialog, "IsRequestDialog" }, // 3267143679
		{ &Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_OpenPickerforReConnectPad, "OpenPickerforReConnectPad" }, // 3901478612
		{ &Z_Construct_UFunction_UELPlatformAccountStatusManagementSubsystem_SwitchProfile, "SwitchProfile" }, // 869211395
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELPlatformAccountStatusManagementSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELPlatformAccountStatusManagementSubsystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELPlatformAccountStatusManagementSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELPlatformAccountStatusManagementSubsystem_Statics::NewProp_OnCloseLoginUIEventHandler_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELPlatformAccountStatusManagementSubsystem" },
		{ "ModuleRelativePath", "Public/ELPlatformAccountStatusManagementSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UELPlatformAccountStatusManagementSubsystem_Statics::NewProp_OnCloseLoginUIEventHandler = { "OnCloseLoginUIEventHandler", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELPlatformAccountStatusManagementSubsystem, OnCloseLoginUIEventHandler), Z_Construct_UDelegateFunction_ABP_200508_CloseLoginUIEventHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UELPlatformAccountStatusManagementSubsystem_Statics::NewProp_OnCloseLoginUIEventHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELPlatformAccountStatusManagementSubsystem_Statics::NewProp_OnCloseLoginUIEventHandler_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELPlatformAccountStatusManagementSubsystem_Statics::NewProp_OnLoginCancelEventHandler_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELPlatformAccountStatusManagementSubsystem" },
		{ "ModuleRelativePath", "Public/ELPlatformAccountStatusManagementSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UELPlatformAccountStatusManagementSubsystem_Statics::NewProp_OnLoginCancelEventHandler = { "OnLoginCancelEventHandler", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELPlatformAccountStatusManagementSubsystem, OnLoginCancelEventHandler), Z_Construct_UDelegateFunction_ABP_200508_LoginCancelEventHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UELPlatformAccountStatusManagementSubsystem_Statics::NewProp_OnLoginCancelEventHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELPlatformAccountStatusManagementSubsystem_Statics::NewProp_OnLoginCancelEventHandler_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELPlatformAccountStatusManagementSubsystem_Statics::NewProp_OnLogoutEventHandler_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELPlatformAccountStatusManagementSubsystem" },
		{ "ModuleRelativePath", "Public/ELPlatformAccountStatusManagementSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UELPlatformAccountStatusManagementSubsystem_Statics::NewProp_OnLogoutEventHandler = { "OnLogoutEventHandler", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELPlatformAccountStatusManagementSubsystem, OnLogoutEventHandler), Z_Construct_UDelegateFunction_ABP_200508_LogoutEventHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UELPlatformAccountStatusManagementSubsystem_Statics::NewProp_OnLogoutEventHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELPlatformAccountStatusManagementSubsystem_Statics::NewProp_OnLogoutEventHandler_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELPlatformAccountStatusManagementSubsystem_Statics::NewProp_OnSwapLoginEventHandler_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELPlatformAccountStatusManagementSubsystem" },
		{ "ModuleRelativePath", "Public/ELPlatformAccountStatusManagementSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UELPlatformAccountStatusManagementSubsystem_Statics::NewProp_OnSwapLoginEventHandler = { "OnSwapLoginEventHandler", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELPlatformAccountStatusManagementSubsystem, OnSwapLoginEventHandler), Z_Construct_UDelegateFunction_ABP_200508_SwapLoginEventHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UELPlatformAccountStatusManagementSubsystem_Statics::NewProp_OnSwapLoginEventHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELPlatformAccountStatusManagementSubsystem_Statics::NewProp_OnSwapLoginEventHandler_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELPlatformAccountStatusManagementSubsystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELPlatformAccountStatusManagementSubsystem_Statics::NewProp_OnCloseLoginUIEventHandler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELPlatformAccountStatusManagementSubsystem_Statics::NewProp_OnLoginCancelEventHandler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELPlatformAccountStatusManagementSubsystem_Statics::NewProp_OnLogoutEventHandler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELPlatformAccountStatusManagementSubsystem_Statics::NewProp_OnSwapLoginEventHandler,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELPlatformAccountStatusManagementSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELPlatformAccountStatusManagementSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELPlatformAccountStatusManagementSubsystem_Statics::ClassParams = {
		&UELPlatformAccountStatusManagementSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELPlatformAccountStatusManagementSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELPlatformAccountStatusManagementSubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELPlatformAccountStatusManagementSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELPlatformAccountStatusManagementSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELPlatformAccountStatusManagementSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELPlatformAccountStatusManagementSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELPlatformAccountStatusManagementSubsystem, 1118680044);
	template<> ABP_200508_API UClass* StaticClass<UELPlatformAccountStatusManagementSubsystem>()
	{
		return UELPlatformAccountStatusManagementSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELPlatformAccountStatusManagementSubsystem(Z_Construct_UClass_UELPlatformAccountStatusManagementSubsystem, &UELPlatformAccountStatusManagementSubsystem::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELPlatformAccountStatusManagementSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELPlatformAccountStatusManagementSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
