// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/InGameMovesPreviewManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInGameMovesPreviewManager() {}
// Cross Module References
	ELITE_API UClass* Z_Construct_UClass_AInGameMovesPreviewManager_NoRegister();
	ELITE_API UClass* Z_Construct_UClass_AInGameMovesPreviewManager();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_ELITE();
	ELITE_API UClass* Z_Construct_UClass_UInGameMovesPreviewMenu_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AInGameMovesPreviewManager::execSetUpController)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUpController();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AInGameMovesPreviewManager::execSortMontageKeyArray)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutKeys);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SortMontageKeyArray(Z_Param_Out_OutKeys);
		P_NATIVE_END;
	}
	static FName NAME_AInGameMovesPreviewManager_Debug_Down = FName(TEXT("Debug_Down"));
	void AInGameMovesPreviewManager::Debug_Down()
	{
		ProcessEvent(FindFunctionChecked(NAME_AInGameMovesPreviewManager_Debug_Down),NULL);
	}
	static FName NAME_AInGameMovesPreviewManager_Debug_FaceButton_Bottom = FName(TEXT("Debug_FaceButton_Bottom"));
	void AInGameMovesPreviewManager::Debug_FaceButton_Bottom()
	{
		ProcessEvent(FindFunctionChecked(NAME_AInGameMovesPreviewManager_Debug_FaceButton_Bottom),NULL);
	}
	static FName NAME_AInGameMovesPreviewManager_Debug_FaceButton_Right = FName(TEXT("Debug_FaceButton_Right"));
	void AInGameMovesPreviewManager::Debug_FaceButton_Right()
	{
		ProcessEvent(FindFunctionChecked(NAME_AInGameMovesPreviewManager_Debug_FaceButton_Right),NULL);
	}
	static FName NAME_AInGameMovesPreviewManager_Debug_Left = FName(TEXT("Debug_Left"));
	void AInGameMovesPreviewManager::Debug_Left()
	{
		ProcessEvent(FindFunctionChecked(NAME_AInGameMovesPreviewManager_Debug_Left),NULL);
	}
	static FName NAME_AInGameMovesPreviewManager_Debug_Right = FName(TEXT("Debug_Right"));
	void AInGameMovesPreviewManager::Debug_Right()
	{
		ProcessEvent(FindFunctionChecked(NAME_AInGameMovesPreviewManager_Debug_Right),NULL);
	}
	static FName NAME_AInGameMovesPreviewManager_Debug_Up = FName(TEXT("Debug_Up"));
	void AInGameMovesPreviewManager::Debug_Up()
	{
		ProcessEvent(FindFunctionChecked(NAME_AInGameMovesPreviewManager_Debug_Up),NULL);
	}
	void AInGameMovesPreviewManager::StaticRegisterNativesAInGameMovesPreviewManager()
	{
		UClass* Class = AInGameMovesPreviewManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetUpController", &AInGameMovesPreviewManager::execSetUpController },
			{ "SortMontageKeyArray", &AInGameMovesPreviewManager::execSortMontageKeyArray },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AInGameMovesPreviewManager_Debug_Down_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInGameMovesPreviewManager_Debug_Down_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InGameMovesPreviewManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInGameMovesPreviewManager_Debug_Down_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInGameMovesPreviewManager, nullptr, "Debug_Down", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInGameMovesPreviewManager_Debug_Down_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInGameMovesPreviewManager_Debug_Down_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInGameMovesPreviewManager_Debug_Down()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInGameMovesPreviewManager_Debug_Down_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInGameMovesPreviewManager_Debug_FaceButton_Bottom_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInGameMovesPreviewManager_Debug_FaceButton_Bottom_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InGameMovesPreviewManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInGameMovesPreviewManager_Debug_FaceButton_Bottom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInGameMovesPreviewManager, nullptr, "Debug_FaceButton_Bottom", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInGameMovesPreviewManager_Debug_FaceButton_Bottom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInGameMovesPreviewManager_Debug_FaceButton_Bottom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInGameMovesPreviewManager_Debug_FaceButton_Bottom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInGameMovesPreviewManager_Debug_FaceButton_Bottom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInGameMovesPreviewManager_Debug_FaceButton_Right_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInGameMovesPreviewManager_Debug_FaceButton_Right_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InGameMovesPreviewManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInGameMovesPreviewManager_Debug_FaceButton_Right_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInGameMovesPreviewManager, nullptr, "Debug_FaceButton_Right", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInGameMovesPreviewManager_Debug_FaceButton_Right_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInGameMovesPreviewManager_Debug_FaceButton_Right_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInGameMovesPreviewManager_Debug_FaceButton_Right()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInGameMovesPreviewManager_Debug_FaceButton_Right_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInGameMovesPreviewManager_Debug_Left_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInGameMovesPreviewManager_Debug_Left_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InGameMovesPreviewManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInGameMovesPreviewManager_Debug_Left_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInGameMovesPreviewManager, nullptr, "Debug_Left", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInGameMovesPreviewManager_Debug_Left_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInGameMovesPreviewManager_Debug_Left_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInGameMovesPreviewManager_Debug_Left()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInGameMovesPreviewManager_Debug_Left_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInGameMovesPreviewManager_Debug_Right_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInGameMovesPreviewManager_Debug_Right_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InGameMovesPreviewManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInGameMovesPreviewManager_Debug_Right_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInGameMovesPreviewManager, nullptr, "Debug_Right", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInGameMovesPreviewManager_Debug_Right_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInGameMovesPreviewManager_Debug_Right_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInGameMovesPreviewManager_Debug_Right()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInGameMovesPreviewManager_Debug_Right_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInGameMovesPreviewManager_Debug_Up_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInGameMovesPreviewManager_Debug_Up_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InGameMovesPreviewManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInGameMovesPreviewManager_Debug_Up_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInGameMovesPreviewManager, nullptr, "Debug_Up", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInGameMovesPreviewManager_Debug_Up_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInGameMovesPreviewManager_Debug_Up_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInGameMovesPreviewManager_Debug_Up()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInGameMovesPreviewManager_Debug_Up_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInGameMovesPreviewManager_SetUpController_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInGameMovesPreviewManager_SetUpController_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InGameMovesPreviewManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInGameMovesPreviewManager_SetUpController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInGameMovesPreviewManager, nullptr, "SetUpController", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInGameMovesPreviewManager_SetUpController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInGameMovesPreviewManager_SetUpController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInGameMovesPreviewManager_SetUpController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInGameMovesPreviewManager_SetUpController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInGameMovesPreviewManager_SortMontageKeyArray_Statics
	{
		struct InGameMovesPreviewManager_eventSortMontageKeyArray_Parms
		{
			TArray<FString> OutKeys;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutKeys_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutKeys;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AInGameMovesPreviewManager_SortMontageKeyArray_Statics::NewProp_OutKeys_Inner = { "OutKeys", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AInGameMovesPreviewManager_SortMontageKeyArray_Statics::NewProp_OutKeys = { "OutKeys", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InGameMovesPreviewManager_eventSortMontageKeyArray_Parms, OutKeys), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInGameMovesPreviewManager_SortMontageKeyArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInGameMovesPreviewManager_SortMontageKeyArray_Statics::NewProp_OutKeys_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInGameMovesPreviewManager_SortMontageKeyArray_Statics::NewProp_OutKeys,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInGameMovesPreviewManager_SortMontageKeyArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InGameMovesPreviewManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInGameMovesPreviewManager_SortMontageKeyArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInGameMovesPreviewManager, nullptr, "SortMontageKeyArray", nullptr, nullptr, sizeof(InGameMovesPreviewManager_eventSortMontageKeyArray_Parms), Z_Construct_UFunction_AInGameMovesPreviewManager_SortMontageKeyArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInGameMovesPreviewManager_SortMontageKeyArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInGameMovesPreviewManager_SortMontageKeyArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInGameMovesPreviewManager_SortMontageKeyArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInGameMovesPreviewManager_SortMontageKeyArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInGameMovesPreviewManager_SortMontageKeyArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AInGameMovesPreviewManager_NoRegister()
	{
		return AInGameMovesPreviewManager::StaticClass();
	}
	struct Z_Construct_UClass_AInGameMovesPreviewManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewMenu_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewMenu;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInGameMovesPreviewManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AInGameMovesPreviewManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AInGameMovesPreviewManager_Debug_Down, "Debug_Down" }, // 1347238067
		{ &Z_Construct_UFunction_AInGameMovesPreviewManager_Debug_FaceButton_Bottom, "Debug_FaceButton_Bottom" }, // 2993719869
		{ &Z_Construct_UFunction_AInGameMovesPreviewManager_Debug_FaceButton_Right, "Debug_FaceButton_Right" }, // 917818189
		{ &Z_Construct_UFunction_AInGameMovesPreviewManager_Debug_Left, "Debug_Left" }, // 2903305158
		{ &Z_Construct_UFunction_AInGameMovesPreviewManager_Debug_Right, "Debug_Right" }, // 56540694
		{ &Z_Construct_UFunction_AInGameMovesPreviewManager_Debug_Up, "Debug_Up" }, // 2941924785
		{ &Z_Construct_UFunction_AInGameMovesPreviewManager_SetUpController, "SetUpController" }, // 1851003909
		{ &Z_Construct_UFunction_AInGameMovesPreviewManager_SortMontageKeyArray, "SortMontageKeyArray" }, // 3205851008
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInGameMovesPreviewManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "InGameMovesPreviewManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/InGameMovesPreviewManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInGameMovesPreviewManager_Statics::NewProp_PreviewMenu_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InGameMovesPreviewManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InGameMovesPreviewManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInGameMovesPreviewManager_Statics::NewProp_PreviewMenu = { "PreviewMenu", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInGameMovesPreviewManager, PreviewMenu), Z_Construct_UClass_UInGameMovesPreviewMenu_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AInGameMovesPreviewManager_Statics::NewProp_PreviewMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInGameMovesPreviewManager_Statics::NewProp_PreviewMenu_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInGameMovesPreviewManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInGameMovesPreviewManager_Statics::NewProp_PreviewMenu,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInGameMovesPreviewManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInGameMovesPreviewManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInGameMovesPreviewManager_Statics::ClassParams = {
		&AInGameMovesPreviewManager::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AInGameMovesPreviewManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AInGameMovesPreviewManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AInGameMovesPreviewManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInGameMovesPreviewManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInGameMovesPreviewManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInGameMovesPreviewManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInGameMovesPreviewManager, 3968038772);
	template<> ELITE_API UClass* StaticClass<AInGameMovesPreviewManager>()
	{
		return AInGameMovesPreviewManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInGameMovesPreviewManager(Z_Construct_UClass_AInGameMovesPreviewManager, &AInGameMovesPreviewManager::StaticClass, TEXT("/Script/ELITE"), TEXT("AInGameMovesPreviewManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInGameMovesPreviewManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
