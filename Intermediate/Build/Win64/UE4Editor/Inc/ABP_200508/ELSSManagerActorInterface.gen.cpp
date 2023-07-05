// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSManagerActorInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSManagerActorInterface() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSManagerActorInterface_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSManagerActorInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	DEFINE_FUNCTION(IELSSManagerActorInterface::execOnCompletedSpawnManagerActors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCompletedSpawnManagerActors_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IELSSManagerActorInterface::execOnDeadMySelf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDeadMySelf_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IELSSManagerActorInterface::execOnEndOfMatch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndOfMatch_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IELSSManagerActorInterface::execOnStartOfMatch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStartOfMatch_Implementation();
		P_NATIVE_END;
	}
	void IELSSManagerActorInterface::OnCompletedSpawnManagerActors()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnCompletedSpawnManagerActors instead.");
	}
	void IELSSManagerActorInterface::OnDeadMySelf()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnDeadMySelf instead.");
	}
	void IELSSManagerActorInterface::OnEndOfMatch()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnEndOfMatch instead.");
	}
	void IELSSManagerActorInterface::OnStartOfMatch()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnStartOfMatch instead.");
	}
	void UELSSManagerActorInterface::StaticRegisterNativesUELSSManagerActorInterface()
	{
		UClass* Class = UELSSManagerActorInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCompletedSpawnManagerActors", &IELSSManagerActorInterface::execOnCompletedSpawnManagerActors },
			{ "OnDeadMySelf", &IELSSManagerActorInterface::execOnDeadMySelf },
			{ "OnEndOfMatch", &IELSSManagerActorInterface::execOnEndOfMatch },
			{ "OnStartOfMatch", &IELSSManagerActorInterface::execOnStartOfMatch },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSManagerActorInterface_OnCompletedSpawnManagerActors_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSManagerActorInterface_OnCompletedSpawnManagerActors_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSManagerActorInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSManagerActorInterface_OnCompletedSpawnManagerActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSManagerActorInterface, nullptr, "OnCompletedSpawnManagerActors", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSManagerActorInterface_OnCompletedSpawnManagerActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSManagerActorInterface_OnCompletedSpawnManagerActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSManagerActorInterface_OnCompletedSpawnManagerActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSManagerActorInterface_OnCompletedSpawnManagerActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSManagerActorInterface_OnDeadMySelf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSManagerActorInterface_OnDeadMySelf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSManagerActorInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSManagerActorInterface_OnDeadMySelf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSManagerActorInterface, nullptr, "OnDeadMySelf", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSManagerActorInterface_OnDeadMySelf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSManagerActorInterface_OnDeadMySelf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSManagerActorInterface_OnDeadMySelf()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSManagerActorInterface_OnDeadMySelf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSManagerActorInterface_OnEndOfMatch_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSManagerActorInterface_OnEndOfMatch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSManagerActorInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSManagerActorInterface_OnEndOfMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSManagerActorInterface, nullptr, "OnEndOfMatch", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSManagerActorInterface_OnEndOfMatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSManagerActorInterface_OnEndOfMatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSManagerActorInterface_OnEndOfMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSManagerActorInterface_OnEndOfMatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSManagerActorInterface_OnStartOfMatch_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSManagerActorInterface_OnStartOfMatch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSManagerActorInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSManagerActorInterface_OnStartOfMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSManagerActorInterface, nullptr, "OnStartOfMatch", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSManagerActorInterface_OnStartOfMatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSManagerActorInterface_OnStartOfMatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSManagerActorInterface_OnStartOfMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSManagerActorInterface_OnStartOfMatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSManagerActorInterface_NoRegister()
	{
		return UELSSManagerActorInterface::StaticClass();
	}
	struct Z_Construct_UClass_UELSSManagerActorInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSManagerActorInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSManagerActorInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSManagerActorInterface_OnCompletedSpawnManagerActors, "OnCompletedSpawnManagerActors" }, // 4003957619
		{ &Z_Construct_UFunction_UELSSManagerActorInterface_OnDeadMySelf, "OnDeadMySelf" }, // 3242797642
		{ &Z_Construct_UFunction_UELSSManagerActorInterface_OnEndOfMatch, "OnEndOfMatch" }, // 2461752886
		{ &Z_Construct_UFunction_UELSSManagerActorInterface_OnStartOfMatch, "OnStartOfMatch" }, // 1531389563
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSManagerActorInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSManagerActorInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSManagerActorInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IELSSManagerActorInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSManagerActorInterface_Statics::ClassParams = {
		&UELSSManagerActorInterface::StaticClass,
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
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSManagerActorInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSManagerActorInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSManagerActorInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSManagerActorInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSManagerActorInterface, 4276424303);
	template<> ABP_200508_API UClass* StaticClass<UELSSManagerActorInterface>()
	{
		return UELSSManagerActorInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSManagerActorInterface(Z_Construct_UClass_UELSSManagerActorInterface, &UELSSManagerActorInterface::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSManagerActorInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSManagerActorInterface);
	static FName NAME_UELSSManagerActorInterface_OnCompletedSpawnManagerActors = FName(TEXT("OnCompletedSpawnManagerActors"));
	void IELSSManagerActorInterface::Execute_OnCompletedSpawnManagerActors(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UELSSManagerActorInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UELSSManagerActorInterface_OnCompletedSpawnManagerActors);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IELSSManagerActorInterface*)(O->GetNativeInterfaceAddress(UELSSManagerActorInterface::StaticClass())))
		{
			I->OnCompletedSpawnManagerActors_Implementation();
		}
	}
	static FName NAME_UELSSManagerActorInterface_OnDeadMySelf = FName(TEXT("OnDeadMySelf"));
	void IELSSManagerActorInterface::Execute_OnDeadMySelf(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UELSSManagerActorInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UELSSManagerActorInterface_OnDeadMySelf);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IELSSManagerActorInterface*)(O->GetNativeInterfaceAddress(UELSSManagerActorInterface::StaticClass())))
		{
			I->OnDeadMySelf_Implementation();
		}
	}
	static FName NAME_UELSSManagerActorInterface_OnEndOfMatch = FName(TEXT("OnEndOfMatch"));
	void IELSSManagerActorInterface::Execute_OnEndOfMatch(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UELSSManagerActorInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UELSSManagerActorInterface_OnEndOfMatch);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IELSSManagerActorInterface*)(O->GetNativeInterfaceAddress(UELSSManagerActorInterface::StaticClass())))
		{
			I->OnEndOfMatch_Implementation();
		}
	}
	static FName NAME_UELSSManagerActorInterface_OnStartOfMatch = FName(TEXT("OnStartOfMatch"));
	void IELSSManagerActorInterface::Execute_OnStartOfMatch(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UELSSManagerActorInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UELSSManagerActorInterface_OnStartOfMatch);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IELSSManagerActorInterface*)(O->GetNativeInterfaceAddress(UELSSManagerActorInterface::StaticClass())))
		{
			I->OnStartOfMatch_Implementation();
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
