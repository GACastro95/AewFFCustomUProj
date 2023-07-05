// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSWidgetHUD_SSSpectateWindow.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSWidgetHUD_SSSpectateWindow() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_SSSpectateWindow_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_SSSpectateWindow();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSPlayerState_NoRegister();
// End Cross Module References
	static FName NAME_UELSSWidgetHUD_SSSpectateWindow_CancelHold = FName(TEXT("CancelHold"));
	void UELSSWidgetHUD_SSSpectateWindow::CancelHold()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_SSSpectateWindow_CancelHold),NULL);
	}
	static FName NAME_UELSSWidgetHUD_SSSpectateWindow_Init = FName(TEXT("Init"));
	void UELSSWidgetHUD_SSSpectateWindow::Init()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_SSSpectateWindow_Init),NULL);
	}
	static FName NAME_UELSSWidgetHUD_SSSpectateWindow_OnPushNextUser = FName(TEXT("OnPushNextUser"));
	void UELSSWidgetHUD_SSSpectateWindow::OnPushNextUser()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_SSSpectateWindow_OnPushNextUser),NULL);
	}
	static FName NAME_UELSSWidgetHUD_SSSpectateWindow_OnPushPrevUser = FName(TEXT("OnPushPrevUser"));
	void UELSSWidgetHUD_SSSpectateWindow::OnPushPrevUser()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_SSSpectateWindow_OnPushPrevUser),NULL);
	}
	static FName NAME_UELSSWidgetHUD_SSSpectateWindow_OnPushQuitMatch = FName(TEXT("OnPushQuitMatch"));
	void UELSSWidgetHUD_SSSpectateWindow::OnPushQuitMatch()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_SSSpectateWindow_OnPushQuitMatch),NULL);
	}
	static FName NAME_UELSSWidgetHUD_SSSpectateWindow_SetHoldButtonRatio = FName(TEXT("SetHoldButtonRatio"));
	void UELSSWidgetHUD_SSSpectateWindow::SetHoldButtonRatio(float InRatio)
	{
		ELSSWidgetHUD_SSSpectateWindow_eventSetHoldButtonRatio_Parms Parms;
		Parms.InRatio=InRatio;
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_SSSpectateWindow_SetHoldButtonRatio),&Parms);
	}
	static FName NAME_UELSSWidgetHUD_SSSpectateWindow_SetSpectatedUserInfo = FName(TEXT("SetSpectatedUserInfo"));
	void UELSSWidgetHUD_SSSpectateWindow::SetSpectatedUserInfo(AELSSPlayerState* inPlayerState)
	{
		ELSSWidgetHUD_SSSpectateWindow_eventSetSpectatedUserInfo_Parms Parms;
		Parms.inPlayerState=inPlayerState;
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_SSSpectateWindow_SetSpectatedUserInfo),&Parms);
	}
	void UELSSWidgetHUD_SSSpectateWindow::StaticRegisterNativesUELSSWidgetHUD_SSSpectateWindow()
	{
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_SSSpectateWindow_CancelHold_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_SSSpectateWindow_CancelHold_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_SSSpectateWindow.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_SSSpectateWindow_CancelHold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_SSSpectateWindow, nullptr, "CancelHold", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_SSSpectateWindow_CancelHold_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_SSSpectateWindow_CancelHold_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_SSSpectateWindow_CancelHold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_SSSpectateWindow_CancelHold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_SSSpectateWindow_Init_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_SSSpectateWindow_Init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_SSSpectateWindow.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_SSSpectateWindow_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_SSSpectateWindow, nullptr, "Init", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_SSSpectateWindow_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_SSSpectateWindow_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_SSSpectateWindow_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_SSSpectateWindow_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_SSSpectateWindow_OnPushNextUser_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_SSSpectateWindow_OnPushNextUser_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_SSSpectateWindow.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_SSSpectateWindow_OnPushNextUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_SSSpectateWindow, nullptr, "OnPushNextUser", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_SSSpectateWindow_OnPushNextUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_SSSpectateWindow_OnPushNextUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_SSSpectateWindow_OnPushNextUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_SSSpectateWindow_OnPushNextUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_SSSpectateWindow_OnPushPrevUser_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_SSSpectateWindow_OnPushPrevUser_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_SSSpectateWindow.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_SSSpectateWindow_OnPushPrevUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_SSSpectateWindow, nullptr, "OnPushPrevUser", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_SSSpectateWindow_OnPushPrevUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_SSSpectateWindow_OnPushPrevUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_SSSpectateWindow_OnPushPrevUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_SSSpectateWindow_OnPushPrevUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_SSSpectateWindow_OnPushQuitMatch_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_SSSpectateWindow_OnPushQuitMatch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_SSSpectateWindow.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_SSSpectateWindow_OnPushQuitMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_SSSpectateWindow, nullptr, "OnPushQuitMatch", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_SSSpectateWindow_OnPushQuitMatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_SSSpectateWindow_OnPushQuitMatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_SSSpectateWindow_OnPushQuitMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_SSSpectateWindow_OnPushQuitMatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_SSSpectateWindow_SetHoldButtonRatio_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InRatio;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_SSSpectateWindow_SetHoldButtonRatio_Statics::NewProp_InRatio = { "InRatio", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_SSSpectateWindow_eventSetHoldButtonRatio_Parms, InRatio), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_SSSpectateWindow_SetHoldButtonRatio_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_SSSpectateWindow_SetHoldButtonRatio_Statics::NewProp_InRatio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_SSSpectateWindow_SetHoldButtonRatio_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_SSSpectateWindow.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_SSSpectateWindow_SetHoldButtonRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_SSSpectateWindow, nullptr, "SetHoldButtonRatio", nullptr, nullptr, sizeof(ELSSWidgetHUD_SSSpectateWindow_eventSetHoldButtonRatio_Parms), Z_Construct_UFunction_UELSSWidgetHUD_SSSpectateWindow_SetHoldButtonRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_SSSpectateWindow_SetHoldButtonRatio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_SSSpectateWindow_SetHoldButtonRatio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_SSSpectateWindow_SetHoldButtonRatio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_SSSpectateWindow_SetHoldButtonRatio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_SSSpectateWindow_SetHoldButtonRatio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_SSSpectateWindow_SetSpectatedUserInfo_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inPlayerState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_SSSpectateWindow_SetSpectatedUserInfo_Statics::NewProp_inPlayerState = { "inPlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_SSSpectateWindow_eventSetSpectatedUserInfo_Parms, inPlayerState), Z_Construct_UClass_AELSSPlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_SSSpectateWindow_SetSpectatedUserInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_SSSpectateWindow_SetSpectatedUserInfo_Statics::NewProp_inPlayerState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_SSSpectateWindow_SetSpectatedUserInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_SSSpectateWindow.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_SSSpectateWindow_SetSpectatedUserInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_SSSpectateWindow, nullptr, "SetSpectatedUserInfo", nullptr, nullptr, sizeof(ELSSWidgetHUD_SSSpectateWindow_eventSetSpectatedUserInfo_Parms), Z_Construct_UFunction_UELSSWidgetHUD_SSSpectateWindow_SetSpectatedUserInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_SSSpectateWindow_SetSpectatedUserInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_SSSpectateWindow_SetSpectatedUserInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_SSSpectateWindow_SetSpectatedUserInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_SSSpectateWindow_SetSpectatedUserInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_SSSpectateWindow_SetSpectatedUserInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSWidgetHUD_SSSpectateWindow_NoRegister()
	{
		return UELSSWidgetHUD_SSSpectateWindow::StaticClass();
	}
	struct Z_Construct_UClass_UELSSWidgetHUD_SSSpectateWindow_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSWidgetHUD_SSSpectateWindow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELSSWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSWidgetHUD_SSSpectateWindow_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSWidgetHUD_SSSpectateWindow_CancelHold, "CancelHold" }, // 4028871937
		{ &Z_Construct_UFunction_UELSSWidgetHUD_SSSpectateWindow_Init, "Init" }, // 4031371027
		{ &Z_Construct_UFunction_UELSSWidgetHUD_SSSpectateWindow_OnPushNextUser, "OnPushNextUser" }, // 822505005
		{ &Z_Construct_UFunction_UELSSWidgetHUD_SSSpectateWindow_OnPushPrevUser, "OnPushPrevUser" }, // 4147636023
		{ &Z_Construct_UFunction_UELSSWidgetHUD_SSSpectateWindow_OnPushQuitMatch, "OnPushQuitMatch" }, // 570621949
		{ &Z_Construct_UFunction_UELSSWidgetHUD_SSSpectateWindow_SetHoldButtonRatio, "SetHoldButtonRatio" }, // 741021103
		{ &Z_Construct_UFunction_UELSSWidgetHUD_SSSpectateWindow_SetSpectatedUserInfo, "SetSpectatedUserInfo" }, // 93202868
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_SSSpectateWindow_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSWidgetHUD_SSSpectateWindow.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_SSSpectateWindow.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSWidgetHUD_SSSpectateWindow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSWidgetHUD_SSSpectateWindow>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSWidgetHUD_SSSpectateWindow_Statics::ClassParams = {
		&UELSSWidgetHUD_SSSpectateWindow::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_SSSpectateWindow_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_SSSpectateWindow_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSWidgetHUD_SSSpectateWindow()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSWidgetHUD_SSSpectateWindow_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSWidgetHUD_SSSpectateWindow, 1334714846);
	template<> ABP_200508_API UClass* StaticClass<UELSSWidgetHUD_SSSpectateWindow>()
	{
		return UELSSWidgetHUD_SSSpectateWindow::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSWidgetHUD_SSSpectateWindow(Z_Construct_UClass_UELSSWidgetHUD_SSSpectateWindow, &UELSSWidgetHUD_SSSpectateWindow::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSWidgetHUD_SSSpectateWindow"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSWidgetHUD_SSSpectateWindow);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
