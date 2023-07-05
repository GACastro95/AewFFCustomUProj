// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/YCAW_DebugMenu.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYCAW_DebugMenu() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UYCAW_DebugMenu_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UYCAW_DebugMenu();
	ABP_200508_API UClass* Z_Construct_UClass_UYCreate_DebugMenuBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_CAW_DebugDelegate__DelegateSignature();
// End Cross Module References
	static FName NAME_UYCAW_DebugMenu_EnableHeavyCAW = FName(TEXT("EnableHeavyCAW"));
	bool UYCAW_DebugMenu::EnableHeavyCAW()
	{
		YCAW_DebugMenu_eventEnableHeavyCAW_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UYCAW_DebugMenu_EnableHeavyCAW),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UYCAW_DebugMenu_EnableMaxCAW = FName(TEXT("EnableMaxCAW"));
	bool UYCAW_DebugMenu::EnableMaxCAW()
	{
		YCAW_DebugMenu_eventEnableMaxCAW_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UYCAW_DebugMenu_EnableMaxCAW),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UYCAW_DebugMenu_Initialize = FName(TEXT("Initialize"));
	void UYCAW_DebugMenu::Initialize()
	{
		ProcessEvent(FindFunctionChecked(NAME_UYCAW_DebugMenu_Initialize),NULL);
	}
	static FName NAME_UYCAW_DebugMenu_ReceiveTick = FName(TEXT("ReceiveTick"));
	void UYCAW_DebugMenu::ReceiveTick(float DeltaSeconds)
	{
		YCAW_DebugMenu_eventReceiveTick_Parms Parms;
		Parms.DeltaSeconds=DeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_UYCAW_DebugMenu_ReceiveTick),&Parms);
	}
	void UYCAW_DebugMenu::StaticRegisterNativesUYCAW_DebugMenu()
	{
	}
	struct Z_Construct_UFunction_UYCAW_DebugMenu_EnableHeavyCAW_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UYCAW_DebugMenu_EnableHeavyCAW_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YCAW_DebugMenu_eventEnableHeavyCAW_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYCAW_DebugMenu_EnableHeavyCAW_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YCAW_DebugMenu_eventEnableHeavyCAW_Parms), &Z_Construct_UFunction_UYCAW_DebugMenu_EnableHeavyCAW_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYCAW_DebugMenu_EnableHeavyCAW_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYCAW_DebugMenu_EnableHeavyCAW_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYCAW_DebugMenu_EnableHeavyCAW_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YCAW_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYCAW_DebugMenu_EnableHeavyCAW_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYCAW_DebugMenu, nullptr, "EnableHeavyCAW", nullptr, nullptr, sizeof(YCAW_DebugMenu_eventEnableHeavyCAW_Parms), Z_Construct_UFunction_UYCAW_DebugMenu_EnableHeavyCAW_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYCAW_DebugMenu_EnableHeavyCAW_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYCAW_DebugMenu_EnableHeavyCAW_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYCAW_DebugMenu_EnableHeavyCAW_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYCAW_DebugMenu_EnableHeavyCAW()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYCAW_DebugMenu_EnableHeavyCAW_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYCAW_DebugMenu_EnableMaxCAW_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UYCAW_DebugMenu_EnableMaxCAW_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YCAW_DebugMenu_eventEnableMaxCAW_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYCAW_DebugMenu_EnableMaxCAW_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YCAW_DebugMenu_eventEnableMaxCAW_Parms), &Z_Construct_UFunction_UYCAW_DebugMenu_EnableMaxCAW_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYCAW_DebugMenu_EnableMaxCAW_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYCAW_DebugMenu_EnableMaxCAW_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYCAW_DebugMenu_EnableMaxCAW_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YCAW_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYCAW_DebugMenu_EnableMaxCAW_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYCAW_DebugMenu, nullptr, "EnableMaxCAW", nullptr, nullptr, sizeof(YCAW_DebugMenu_eventEnableMaxCAW_Parms), Z_Construct_UFunction_UYCAW_DebugMenu_EnableMaxCAW_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYCAW_DebugMenu_EnableMaxCAW_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYCAW_DebugMenu_EnableMaxCAW_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYCAW_DebugMenu_EnableMaxCAW_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYCAW_DebugMenu_EnableMaxCAW()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYCAW_DebugMenu_EnableMaxCAW_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYCAW_DebugMenu_Initialize_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYCAW_DebugMenu_Initialize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YCAW_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYCAW_DebugMenu_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYCAW_DebugMenu, nullptr, "Initialize", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYCAW_DebugMenu_Initialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYCAW_DebugMenu_Initialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYCAW_DebugMenu_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYCAW_DebugMenu_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYCAW_DebugMenu_ReceiveTick_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UYCAW_DebugMenu_ReceiveTick_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YCAW_DebugMenu_eventReceiveTick_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYCAW_DebugMenu_ReceiveTick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYCAW_DebugMenu_ReceiveTick_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYCAW_DebugMenu_ReceiveTick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YCAW_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYCAW_DebugMenu_ReceiveTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYCAW_DebugMenu, nullptr, "ReceiveTick", nullptr, nullptr, sizeof(YCAW_DebugMenu_eventReceiveTick_Parms), Z_Construct_UFunction_UYCAW_DebugMenu_ReceiveTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYCAW_DebugMenu_ReceiveTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYCAW_DebugMenu_ReceiveTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYCAW_DebugMenu_ReceiveTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYCAW_DebugMenu_ReceiveTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYCAW_DebugMenu_ReceiveTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UYCAW_DebugMenu_NoRegister()
	{
		return UYCAW_DebugMenu::StaticClass();
	}
	struct Z_Construct_UClass_UYCAW_DebugMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreateAllSaveData_DebugDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_CreateAllSaveData_DebugDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreateHeavyCharacter_DebugDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_CreateHeavyCharacter_DebugDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeleteAllSaveData_DebugDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_DeleteAllSaveData_DebugDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UYCAW_DebugMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UYCreate_DebugMenuBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UYCAW_DebugMenu_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UYCAW_DebugMenu_EnableHeavyCAW, "EnableHeavyCAW" }, // 1403391389
		{ &Z_Construct_UFunction_UYCAW_DebugMenu_EnableMaxCAW, "EnableMaxCAW" }, // 128237699
		{ &Z_Construct_UFunction_UYCAW_DebugMenu_Initialize, "Initialize" }, // 3184106089
		{ &Z_Construct_UFunction_UYCAW_DebugMenu_ReceiveTick, "ReceiveTick" }, // 3589762185
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYCAW_DebugMenu_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "YCAW_DebugMenu.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/YCAW_DebugMenu.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYCAW_DebugMenu_Statics::NewProp_CreateAllSaveData_DebugDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YCAW_DebugMenu" },
		{ "ModuleRelativePath", "Public/YCAW_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UYCAW_DebugMenu_Statics::NewProp_CreateAllSaveData_DebugDelegate = { "CreateAllSaveData_DebugDelegate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UYCAW_DebugMenu, CreateAllSaveData_DebugDelegate), Z_Construct_UDelegateFunction_ABP_200508_CAW_DebugDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UYCAW_DebugMenu_Statics::NewProp_CreateAllSaveData_DebugDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UYCAW_DebugMenu_Statics::NewProp_CreateAllSaveData_DebugDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYCAW_DebugMenu_Statics::NewProp_CreateHeavyCharacter_DebugDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YCAW_DebugMenu" },
		{ "ModuleRelativePath", "Public/YCAW_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UYCAW_DebugMenu_Statics::NewProp_CreateHeavyCharacter_DebugDelegate = { "CreateHeavyCharacter_DebugDelegate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UYCAW_DebugMenu, CreateHeavyCharacter_DebugDelegate), Z_Construct_UDelegateFunction_ABP_200508_CAW_DebugDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UYCAW_DebugMenu_Statics::NewProp_CreateHeavyCharacter_DebugDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UYCAW_DebugMenu_Statics::NewProp_CreateHeavyCharacter_DebugDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYCAW_DebugMenu_Statics::NewProp_DeleteAllSaveData_DebugDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YCAW_DebugMenu" },
		{ "ModuleRelativePath", "Public/YCAW_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UYCAW_DebugMenu_Statics::NewProp_DeleteAllSaveData_DebugDelegate = { "DeleteAllSaveData_DebugDelegate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UYCAW_DebugMenu, DeleteAllSaveData_DebugDelegate), Z_Construct_UDelegateFunction_ABP_200508_CAW_DebugDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UYCAW_DebugMenu_Statics::NewProp_DeleteAllSaveData_DebugDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UYCAW_DebugMenu_Statics::NewProp_DeleteAllSaveData_DebugDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UYCAW_DebugMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYCAW_DebugMenu_Statics::NewProp_CreateAllSaveData_DebugDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYCAW_DebugMenu_Statics::NewProp_CreateHeavyCharacter_DebugDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYCAW_DebugMenu_Statics::NewProp_DeleteAllSaveData_DebugDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UYCAW_DebugMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYCAW_DebugMenu>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UYCAW_DebugMenu_Statics::ClassParams = {
		&UYCAW_DebugMenu::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UYCAW_DebugMenu_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UYCAW_DebugMenu_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UYCAW_DebugMenu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UYCAW_DebugMenu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UYCAW_DebugMenu()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UYCAW_DebugMenu_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UYCAW_DebugMenu, 2597226459);
	template<> ABP_200508_API UClass* StaticClass<UYCAW_DebugMenu>()
	{
		return UYCAW_DebugMenu::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UYCAW_DebugMenu(Z_Construct_UClass_UYCAW_DebugMenu, &UYCAW_DebugMenu::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UYCAW_DebugMenu"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UYCAW_DebugMenu);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
