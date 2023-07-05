// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELNotifyGamepadDisconnected.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELNotifyGamepadDisconnected() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELNotifyGamepadDisconnected_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELNotifyGamepadDisconnected();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FInputDeviceInfo();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AELNotifyGamepadDisconnected::execDisconnecteApplet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisconnecteApplet();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELNotifyGamepadDisconnected::execIsActiveDialog)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsActiveDialog_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_AELNotifyGamepadDisconnected_GetDeviceInfo = FName(TEXT("GetDeviceInfo"));
	FInputDeviceInfo AELNotifyGamepadDisconnected::GetDeviceInfo()
	{
		ELNotifyGamepadDisconnected_eventGetDeviceInfo_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AELNotifyGamepadDisconnected_GetDeviceInfo),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AELNotifyGamepadDisconnected_IsActiveDialog = FName(TEXT("IsActiveDialog"));
	bool AELNotifyGamepadDisconnected::IsActiveDialog()
	{
		ELNotifyGamepadDisconnected_eventIsActiveDialog_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AELNotifyGamepadDisconnected_IsActiveDialog),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AELNotifyGamepadDisconnected_OnBeforeDestory = FName(TEXT("OnBeforeDestory"));
	void AELNotifyGamepadDisconnected::OnBeforeDestory()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELNotifyGamepadDisconnected_OnBeforeDestory),NULL);
	}
	static FName NAME_AELNotifyGamepadDisconnected_OnDisconnectedGamepad = FName(TEXT("OnDisconnectedGamepad"));
	void AELNotifyGamepadDisconnected::OnDisconnectedGamepad(FInputDeviceInfo _deviceInfo)
	{
		ELNotifyGamepadDisconnected_eventOnDisconnectedGamepad_Parms Parms;
		Parms._deviceInfo=_deviceInfo;
		ProcessEvent(FindFunctionChecked(NAME_AELNotifyGamepadDisconnected_OnDisconnectedGamepad),&Parms);
	}
	static FName NAME_AELNotifyGamepadDisconnected_OnManipulateCursor = FName(TEXT("OnManipulateCursor"));
	void AELNotifyGamepadDisconnected::OnManipulateCursor(bool _isLeft)
	{
		ELNotifyGamepadDisconnected_eventOnManipulateCursor_Parms Parms;
		Parms._isLeft=_isLeft ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AELNotifyGamepadDisconnected_OnManipulateCursor),&Parms);
	}
	static FName NAME_AELNotifyGamepadDisconnected_OnManipulateDecideBtn = FName(TEXT("OnManipulateDecideBtn"));
	void AELNotifyGamepadDisconnected::OnManipulateDecideBtn(APlayerController* PlayerController)
	{
		ELNotifyGamepadDisconnected_eventOnManipulateDecideBtn_Parms Parms;
		Parms.PlayerController=PlayerController;
		ProcessEvent(FindFunctionChecked(NAME_AELNotifyGamepadDisconnected_OnManipulateDecideBtn),&Parms);
	}
	void AELNotifyGamepadDisconnected::StaticRegisterNativesAELNotifyGamepadDisconnected()
	{
		UClass* Class = AELNotifyGamepadDisconnected::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisconnecteApplet", &AELNotifyGamepadDisconnected::execDisconnecteApplet },
			{ "IsActiveDialog", &AELNotifyGamepadDisconnected::execIsActiveDialog },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELNotifyGamepadDisconnected_DisconnecteApplet_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNotifyGamepadDisconnected_DisconnecteApplet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNotifyGamepadDisconnected.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNotifyGamepadDisconnected_DisconnecteApplet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNotifyGamepadDisconnected, nullptr, "DisconnecteApplet", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNotifyGamepadDisconnected_DisconnecteApplet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNotifyGamepadDisconnected_DisconnecteApplet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNotifyGamepadDisconnected_DisconnecteApplet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNotifyGamepadDisconnected_DisconnecteApplet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNotifyGamepadDisconnected_GetDeviceInfo_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELNotifyGamepadDisconnected_GetDeviceInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNotifyGamepadDisconnected_eventGetDeviceInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputDeviceInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELNotifyGamepadDisconnected_GetDeviceInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNotifyGamepadDisconnected_GetDeviceInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNotifyGamepadDisconnected_GetDeviceInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNotifyGamepadDisconnected.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNotifyGamepadDisconnected_GetDeviceInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNotifyGamepadDisconnected, nullptr, "GetDeviceInfo", nullptr, nullptr, sizeof(ELNotifyGamepadDisconnected_eventGetDeviceInfo_Parms), Z_Construct_UFunction_AELNotifyGamepadDisconnected_GetDeviceInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNotifyGamepadDisconnected_GetDeviceInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNotifyGamepadDisconnected_GetDeviceInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNotifyGamepadDisconnected_GetDeviceInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNotifyGamepadDisconnected_GetDeviceInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNotifyGamepadDisconnected_GetDeviceInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNotifyGamepadDisconnected_IsActiveDialog_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELNotifyGamepadDisconnected_IsActiveDialog_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELNotifyGamepadDisconnected_eventIsActiveDialog_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELNotifyGamepadDisconnected_IsActiveDialog_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELNotifyGamepadDisconnected_eventIsActiveDialog_Parms), &Z_Construct_UFunction_AELNotifyGamepadDisconnected_IsActiveDialog_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELNotifyGamepadDisconnected_IsActiveDialog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNotifyGamepadDisconnected_IsActiveDialog_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNotifyGamepadDisconnected_IsActiveDialog_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNotifyGamepadDisconnected.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNotifyGamepadDisconnected_IsActiveDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNotifyGamepadDisconnected, nullptr, "IsActiveDialog", nullptr, nullptr, sizeof(ELNotifyGamepadDisconnected_eventIsActiveDialog_Parms), Z_Construct_UFunction_AELNotifyGamepadDisconnected_IsActiveDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNotifyGamepadDisconnected_IsActiveDialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNotifyGamepadDisconnected_IsActiveDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNotifyGamepadDisconnected_IsActiveDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNotifyGamepadDisconnected_IsActiveDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNotifyGamepadDisconnected_IsActiveDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNotifyGamepadDisconnected_OnBeforeDestory_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNotifyGamepadDisconnected_OnBeforeDestory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNotifyGamepadDisconnected.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNotifyGamepadDisconnected_OnBeforeDestory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNotifyGamepadDisconnected, nullptr, "OnBeforeDestory", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNotifyGamepadDisconnected_OnBeforeDestory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNotifyGamepadDisconnected_OnBeforeDestory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNotifyGamepadDisconnected_OnBeforeDestory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNotifyGamepadDisconnected_OnBeforeDestory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNotifyGamepadDisconnected_OnDisconnectedGamepad_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__deviceInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELNotifyGamepadDisconnected_OnDisconnectedGamepad_Statics::NewProp__deviceInfo = { "_deviceInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNotifyGamepadDisconnected_eventOnDisconnectedGamepad_Parms, _deviceInfo), Z_Construct_UScriptStruct_FInputDeviceInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELNotifyGamepadDisconnected_OnDisconnectedGamepad_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNotifyGamepadDisconnected_OnDisconnectedGamepad_Statics::NewProp__deviceInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNotifyGamepadDisconnected_OnDisconnectedGamepad_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNotifyGamepadDisconnected.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNotifyGamepadDisconnected_OnDisconnectedGamepad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNotifyGamepadDisconnected, nullptr, "OnDisconnectedGamepad", nullptr, nullptr, sizeof(ELNotifyGamepadDisconnected_eventOnDisconnectedGamepad_Parms), Z_Construct_UFunction_AELNotifyGamepadDisconnected_OnDisconnectedGamepad_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNotifyGamepadDisconnected_OnDisconnectedGamepad_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNotifyGamepadDisconnected_OnDisconnectedGamepad_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNotifyGamepadDisconnected_OnDisconnectedGamepad_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNotifyGamepadDisconnected_OnDisconnectedGamepad()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNotifyGamepadDisconnected_OnDisconnectedGamepad_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNotifyGamepadDisconnected_OnManipulateCursor_Statics
	{
		static void NewProp__isLeft_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isLeft;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELNotifyGamepadDisconnected_OnManipulateCursor_Statics::NewProp__isLeft_SetBit(void* Obj)
	{
		((ELNotifyGamepadDisconnected_eventOnManipulateCursor_Parms*)Obj)->_isLeft = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELNotifyGamepadDisconnected_OnManipulateCursor_Statics::NewProp__isLeft = { "_isLeft", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELNotifyGamepadDisconnected_eventOnManipulateCursor_Parms), &Z_Construct_UFunction_AELNotifyGamepadDisconnected_OnManipulateCursor_Statics::NewProp__isLeft_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELNotifyGamepadDisconnected_OnManipulateCursor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNotifyGamepadDisconnected_OnManipulateCursor_Statics::NewProp__isLeft,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNotifyGamepadDisconnected_OnManipulateCursor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNotifyGamepadDisconnected.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNotifyGamepadDisconnected_OnManipulateCursor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNotifyGamepadDisconnected, nullptr, "OnManipulateCursor", nullptr, nullptr, sizeof(ELNotifyGamepadDisconnected_eventOnManipulateCursor_Parms), Z_Construct_UFunction_AELNotifyGamepadDisconnected_OnManipulateCursor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNotifyGamepadDisconnected_OnManipulateCursor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNotifyGamepadDisconnected_OnManipulateCursor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNotifyGamepadDisconnected_OnManipulateCursor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNotifyGamepadDisconnected_OnManipulateCursor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNotifyGamepadDisconnected_OnManipulateCursor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNotifyGamepadDisconnected_OnManipulateDecideBtn_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELNotifyGamepadDisconnected_OnManipulateDecideBtn_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNotifyGamepadDisconnected_eventOnManipulateDecideBtn_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELNotifyGamepadDisconnected_OnManipulateDecideBtn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNotifyGamepadDisconnected_OnManipulateDecideBtn_Statics::NewProp_PlayerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNotifyGamepadDisconnected_OnManipulateDecideBtn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNotifyGamepadDisconnected.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNotifyGamepadDisconnected_OnManipulateDecideBtn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNotifyGamepadDisconnected, nullptr, "OnManipulateDecideBtn", nullptr, nullptr, sizeof(ELNotifyGamepadDisconnected_eventOnManipulateDecideBtn_Parms), Z_Construct_UFunction_AELNotifyGamepadDisconnected_OnManipulateDecideBtn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNotifyGamepadDisconnected_OnManipulateDecideBtn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNotifyGamepadDisconnected_OnManipulateDecideBtn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNotifyGamepadDisconnected_OnManipulateDecideBtn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNotifyGamepadDisconnected_OnManipulateDecideBtn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNotifyGamepadDisconnected_OnManipulateDecideBtn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELNotifyGamepadDisconnected_NoRegister()
	{
		return AELNotifyGamepadDisconnected::StaticClass();
	}
	struct Z_Construct_UClass_AELNotifyGamepadDisconnected_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELNotifyGamepadDisconnected_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELNotifyGamepadDisconnected_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELNotifyGamepadDisconnected_DisconnecteApplet, "DisconnecteApplet" }, // 3744847593
		{ &Z_Construct_UFunction_AELNotifyGamepadDisconnected_GetDeviceInfo, "GetDeviceInfo" }, // 1648006605
		{ &Z_Construct_UFunction_AELNotifyGamepadDisconnected_IsActiveDialog, "IsActiveDialog" }, // 2950115842
		{ &Z_Construct_UFunction_AELNotifyGamepadDisconnected_OnBeforeDestory, "OnBeforeDestory" }, // 3348637026
		{ &Z_Construct_UFunction_AELNotifyGamepadDisconnected_OnDisconnectedGamepad, "OnDisconnectedGamepad" }, // 3393436402
		{ &Z_Construct_UFunction_AELNotifyGamepadDisconnected_OnManipulateCursor, "OnManipulateCursor" }, // 3513387885
		{ &Z_Construct_UFunction_AELNotifyGamepadDisconnected_OnManipulateDecideBtn, "OnManipulateDecideBtn" }, // 2985148593
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELNotifyGamepadDisconnected_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELNotifyGamepadDisconnected.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELNotifyGamepadDisconnected.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELNotifyGamepadDisconnected_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELNotifyGamepadDisconnected>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELNotifyGamepadDisconnected_Statics::ClassParams = {
		&AELNotifyGamepadDisconnected::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELNotifyGamepadDisconnected_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELNotifyGamepadDisconnected_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELNotifyGamepadDisconnected()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELNotifyGamepadDisconnected_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELNotifyGamepadDisconnected, 2830482119);
	template<> ABP_200508_API UClass* StaticClass<AELNotifyGamepadDisconnected>()
	{
		return AELNotifyGamepadDisconnected::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELNotifyGamepadDisconnected(Z_Construct_UClass_AELNotifyGamepadDisconnected, &AELNotifyGamepadDisconnected::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELNotifyGamepadDisconnected"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELNotifyGamepadDisconnected);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
